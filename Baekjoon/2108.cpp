#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int N, sum = 0, temp, count = 0, mostIndex, mostCount = -1;
	bool isSecond = 1;
	cin >> N;
	
	int* arr = new int[N];
	
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + N);

	for (int i = 0; i < N; i++)
		sum += arr[i];
	
	if (round(double(sum) / N) == -0)
		cout << 0 << endl;
	else
		cout << round(double(sum) / N) << endl; //������ ���

	cout << arr[N / 2] << endl; //�߾Ӱ� ���

	temp = arr[0];

	for (int i = 0; i < N; i++)
	{
		if(arr[i] == temp)
			count++;
		else
		{
			if (mostCount < count)
			{
				mostIndex = i - 1;
				mostCount = count;
				isSecond = false;
			}
			else if (mostCount == count && isSecond == false)
			{
				isSecond = true;
				mostIndex = i - 1;
			}
			count = 1;
			temp = arr[i];
		}
	}

	if (mostCount < count) //�迭 ���ڶ� �ֺ� �˻�
		mostIndex = N - 1;
	else if (mostCount == count && isSecond == false)
		mostIndex = N - 1;

	cout << arr[mostIndex] << endl; //�ֺ� ���
	
	cout << arr[N - 1] - arr[0] << endl; //�ִ� �ּڰ� ���� ���
}