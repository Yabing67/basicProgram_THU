#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	if (a != b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}
}

int swap1(int a, int b)
{
	if (a != b)
	{
		int c;
		c = a;
		a = b;
		b = c;
		cout << a << endl;
		return b;
	}
}

int main()
{
	int n, m;
	cout << "������n��m��ֵ��" << endl;
	cin >> n >> m;
	cout << "������n��m��ֵΪ��" << endl ;
	swap(n, m);
	cout << n << endl << m;
	//cout << swap1(n, m);
	return 0;
}