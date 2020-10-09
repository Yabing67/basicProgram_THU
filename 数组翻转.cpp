#include<iostream>
using namespace std;

int main()
{
	int num[1001];
	int N;
	cout << "请输入数组中元素个数：" << endl;
	cin >> N;
	cout << "请依次输入数组元素：" << endl;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	cout << "您输入的数组为：" << endl;
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
	cout << "翻转后的数组为：" << endl;
	for (int i = 0; i < N; i++)
		cout << num[i] << " ";
	return 0;
}