#include<iostream>
using namespace std;

int main()
{
	cout << "#�����������#" << endl << endl;
	int num[1001], N;
	cout << "���������еĳ��ȣ�";
	cin >> N;
	cout << "���������������е�Ԫ�أ�"<< endl;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	for (int i = 0; i < N; i++)
	{
		int target = num[i], pos = 0;
		while (target > num[pos])
			pos++;
		for (int j = i; j > pos; j--)
			num[j] = num[j - 1];
		num[pos] = target;
	}
	cout << "����������Ϊ��";
	for (int i = 0; i < N; i++)
		cout << num[i] << "  ";
	return 0;
}