#include<iostream>
using namespace std;
// ���� ���� �Է��ϰ� �� �� �Ҽ��� ���� ���ϱ�


bool isPrimeNumber(int num);

int main()
{
	int T, num, primeNum = 0;
	
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> num;
		if (isPrimeNumber(num))
		{
			primeNum++;
		}
	}
	cout << primeNum;
}

bool isPrimeNumber(int num)
{
	if (num == 1)return false;
	
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)return false;
	}

	return true;
}