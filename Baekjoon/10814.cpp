#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Info
{
public:
	int age;
	string name;

	Info(int age, string name)
	{
		this->age = age;
		this->name = name;
	}
};

bool compare(Info a, Info b);

int main()
{
	int N, age;
	string name;
	cin >> N;

	vector<Info> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> age;
		cin >> name;
		
		vec.push_back(Info(age,name));
	}

	stable_sort(vec.begin(), vec.end(), compare); //�Ϲ� sort�� �Ҿ��� �����̹Ƿ�, ���̰� ���� �κ��� �Է� ������� ���ĵ��� �ʾ��� ���ɼ��� ����.
	//stable_sort �˰��� ������ ����������
	for (int i = 0; i < N; i++)
		cout << vec[i].age <<' '<< vec[i].name << '\n';
}

bool compare(Info a, Info b)
{
	if (a.age < b.age)
		return true;

	return false;
}