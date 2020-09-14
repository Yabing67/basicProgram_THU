#include<iostream>
using namespace std;

bool isnumx(int n, int num)
{
	for (int i = 1; i <= n; i++)
		if (n % num == 0)
			return true;
	return false;
}
int main()
{
	int N;
	int num;
	cout << "请输入一个整数范围：" << endl;
	cin >> N;
	cout << "请输入你想找哪个数的倍数：" << endl;
	cin >> num;
	cout << N<<"以内"<<num<<"的倍数为：" << endl;
	
	for (int i = 1; i <= N; i++)
	{
		if (isnumx(i,num))
			cout << i << endl;
	}
	return 0;
}