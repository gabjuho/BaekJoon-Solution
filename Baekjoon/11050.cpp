#include<iostream>
using namespace std;
int main()
{
	int N, K, m = 1, d = 1; //m�� ����, d�� �и�
	cin >> N >> K;

	for (int i = N; i > N-K; i--)
		m *= i;
	for (int i = 1; i <= K; i++)
		d *= i;
	cout << m / d;
}