#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<pair<int, int>> vec;
int dp[101][100001];
int k;
int max(int a, int b)
{
	return a > b ? a : b;
}

int knapsack(int w, int count)
{
	if (dp[count][w] != 0)
		return dp[count][w];
	//���� ī��Ʈ�� ���� ������ �Ѿ�� ���߰� 0 ��ȯ
	if (count >= vec.size())
		return 0;

	int n1 = knapsack(w, count + 1); //����
	int n2 = 0;
	if (w + vec[count].first <= ::k)
		n2 = vec[count].second + knapsack(w + vec[count].first, count + 1); //����

	return dp[count][w] = max(n1, n2);
}
int main()
{
	int n, w, v; //n ��ǰ ����, k ��ƿ �� �ִ� ����, w �� ������ ����, v �� ������ ��ġ

	cin >> n >> ::k;

	for (int i = 0; i < n; i++)
	{
		cin >> w >> v;
		vec.push_back({ w,v });
	}

	cout << knapsack(0, 0);
}