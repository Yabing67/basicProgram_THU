#include<iostream>
using namespace std;

int N = 100;
int r3, r5, r7, seive[1000];

int main()
{
	cout << "���������3��������" << endl;
	cin >> r3;
	cout << "���������5��������" << endl;
	cin >> r5;
	cout << "���������7��������" << endl;
	cin >> r7;
	for (int i = r3; i <= N; i += 3)
		seive[i]++;
	for (int i = r5; i <= N; i += 5)
		seive[i]++;
	for (int i = r7; i <= N; i += 7)
		seive[i]++;
	for (int i = 0; i <= 1000; i++)
		if (seive[i] == 3)
		{
			cout << "�������������С����Ϊ��"<<i << endl;
			break;
		}
	return 0;
}