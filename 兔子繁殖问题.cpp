#include<iostream>
using namespace std;

int main()
{
	int small[12], big[12];
	small[1] = 1;
	big[1] = 0;
	int n;
	cout << "请输入你要求第几个（月）的兔子总数：" << endl;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		small[i] = big[i - 1];
		big[i] = small[i - 1] + big[i - 1];
	}
	cout << "兔子总数为："  << big[n] + small[n] << "对";
	return 0;
}