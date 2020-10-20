#include<iostream>
using namespace std;

int main()
{
	int num[1001];
	num[1] = 1;
	num[2] = 1;
	int n;
	cout << "请输入你要求数列的第几项：" << endl;
	cin >> n;
	for (int i = 3; i <= n; i++)
		num[i] = num[i - 1] + num[i - 2];
	cout << "第" << n << "项为："<< num[n];
	return 0;
}