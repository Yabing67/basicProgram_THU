#include <iostream>
using namespace std;

void ToBinary(int num, int binary[], int v)
{
	for (int i = v - 1; i >= 0; i--)
	{
		binary[i] = num & 1;
		num = num >> 1;
	}
}

int main()
{
	int num, v = 0;
	int binary[1001];
	cout << "������һ��ʮ��������" << endl;
	cin >> num;
	for (int i = 0; pow(2, i) <= num; i++)
		v = i + 1;
	ToBinary(num, binary, v);
	cout << "��Ӧ�Ķ�������Ϊ��" << endl;
	for (int i = 0; i < v; i++)
		cout << binary[i] << " ";
	return 0;
}