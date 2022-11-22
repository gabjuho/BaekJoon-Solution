#include<iostream>
using namespace std;
int num[11]; //�ǿ����� ����
int oper[4]; //������ ���� ���� -> + - * / ������ 0,1,2,3 �ε���
int n;
int minNum = 2147483647, maxNum = -2147483648; //���߿� ��ġ�� INT_MAX ���˾Ƹ���

void dfs(int count, int sum)
{
	if (count == n)
	{
		maxNum = max(maxNum, sum);
		minNum = min(minNum, sum);
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (oper[i] != 0)
		{
			oper[i]--;
			switch (i)
			{
			case 0:
				dfs(count + 1, sum + num[count]);
				break;
			case 1:
				dfs(count + 1, sum - num[count]);
				break;
			case 2:
				dfs(count + 1, sum * num[count]);
				break;
			case 3:
				dfs(count + 1, sum / num[count]);
				break;
			}

			oper[i]++;
		}
	}
}
int main()
{

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < 4; i++)
		cin >> oper[i];

	dfs(1, num[0]);

	cout << maxNum << '\n' << minNum;
}