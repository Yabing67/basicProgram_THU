#include<iostream>
using namespace std;

int main()
{
	int num[1001];
	num[1] = 1;
	num[2] = 1;
	int n;
	cout << "��������Ҫ�����еĵڼ��" << endl;
	cin >> n;
	for (int i = 3; i <= n; i++)
		num[i] = num[i - 1] + num[i - 2];
	cout << "��" << n << "��Ϊ��"<< num[n];
	return 0;
}