#include<iostream>
using namespace std;

int main()
{
	int N, n;
	cout << "������һ��������Χ��" << endl;
	cin >> N;
	cout << "�������������ĸ����ı�����" << endl;
	cin >> n;
	cout << N << "����" << n << "�ı���Ϊ��" << endl;
	for (int i = n; i <= N; i += n)
		cout << i << endl;
	return 0;
}