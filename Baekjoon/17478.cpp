#include<iostream>
using namespace std;

void chatBot(int n);

int main()
{
	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	chatBot(n);
	cout << "��� �亯�Ͽ���.";
}

void chatBot(int n)
{
	static int count = 0;
	if (n == 0)
	{
		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "\"����Լ��� ������? \"\n";
		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		return;
	}
	else
	{
		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "\"����Լ��� ������? \"\n";
		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		
		count++;
		chatBot(n - 1);

		for (int i = 0; i < count; i++)
			cout << "____";
		cout << "��� �亯�Ͽ���.\n";
		count--;
	}
}