#include<iostream>
using namespace std;

bool isnumx(int n, int num)
{
	for (int i = 1; i <= n; i++)
		if (n % num == 0)
			return true;
	return false;
}
int main()
{
	int N;
	int num;
	cout << "������һ��������Χ��" << endl;
	cin >> N;
	cout << "�������������ĸ����ı�����" << endl;
	cin >> num;
	cout << N<<"����"<<num<<"�ı���Ϊ��" << endl;
	
	for (int i = 1; i <= N; i++)
	{
		if (isnumx(i,num))
			cout << i << endl;
	}
	return 0;
}