#include<iostream>
using namespace std;

int main()
{
	int N, n;
	cout << "请输入一个整数范围：" << endl;
	cin >> N;
	cout << "请输入你想找哪个数的倍数：" << endl;
	cin >> n;
	cout << N << "以内" << n << "的倍数为：" << endl;
	for (int i = n; i <= N; i += n)
		cout << i << endl;
	return 0;
}