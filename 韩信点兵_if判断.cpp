#include<iostream>
using namespace std;

int main() {

	int N = 1000;
	int r3, r5, r7;
	cout << "���������3��������" << endl;
	cin >> r3;
	cout << "���������5��������" << endl;
	cin >> r5;
	cout << "���������7��������" << endl;
	cin >> r7;
	for (int i = 0; i <= N; i++)
		if (i % 3 == r3 && i % 5 == r5 && i % 7 == r7)
		{
			cout << "�������������С����Ϊ��" << i << endl;
			break;
		}
	return 0;
}