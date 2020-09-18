#include<iostream>
using namespace std;

int main()
{
	cout << "请输入您的二进制数（以8结尾）：" << endl;
	int n;
	int num[1001];
	for (int i = 0; i < 1000; i++)
	{
		cin >> num[i];
		if (num[i] != 0 && num[i] != 1 && num[i] != 8)
			return 0;
		if (num[i] == 8)
		{
			n = i - 1;
			break;
		}
	}
	int N = 0;
	for (int i = 0; i <= n; i++)
		N = N + pow(2, i) * num[ n - i];
	cout << "对应的十进制数为："<< N;
	return 0;
}