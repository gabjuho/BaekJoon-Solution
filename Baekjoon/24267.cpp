#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;

	cout << ((n - 2) * (n - 1) * (2 * n - 3) / 6 + (n - 2) * (n - 1) / 2) / 2 << '\n' << 3;
}