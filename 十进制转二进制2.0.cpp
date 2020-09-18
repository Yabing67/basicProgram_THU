#include<iostream>
using namespace std;
int group[1001];
int n, num;

int main()
{
	cout << "请输入一个十进制数：" << endl;
	cin >> n;
	for (int i = 0; pow(2, i) <= n; i++)
		num = i;
	for (int i = num; i >= 0;i--)
	{
		group[i] = n % 2;
		n = (n - n % 2) / 2;
	}
	cout << "对应的二进制数为：" << endl;
	for (int i = 0; i <= num; i++)
		cout << group[i];
	return 0;
}