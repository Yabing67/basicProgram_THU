#include<iostream>
using namespace std;

int main()
{
	int num[1001];
	int N;
	cout << "������������Ԫ�ظ�����" << endl;
	cin >> N;
	cout << "��������������Ԫ�أ�" << endl;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	cout << "�����������Ϊ��" << endl;
	for (int i = 0; i < N; i++)
		cout << num[i] << " ";
	cout << endl;
	if (N % 2 == 0)
		for (int i = 0; i <= (N - 1) / 2; i++)
		{
			int a;
			a = num[i];
			num[i] = num[N - 1 - i];
			num[N - 1 - i] = a;
		}
	else
		for (int i = 0; i < (N - 1) / 2; i++)
		{
			int a;
			a = num[i];
			num[i] = num[N - 1 - i];
			num[N - 1 - i] = a;
		}
	cout << "��ת�������Ϊ��" << endl;
	for (int i = 0; i < N; i++)
		cout << num[i] << " ";
	return 0;
}