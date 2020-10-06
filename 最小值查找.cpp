#include<iostream>
using namespace std;

int main()
{
	int min;
	int num[1001];
	cout << "请输入您的数：" << endl;
	for (int i = 0; i < 3; i++)
		cin >> num[i];
	min = num[0];
	for (int i = 0;i < 3; i++)
		if (num[i] <= min)
			min = num[i];
	cout <<"最小值为：" << min;
	return 0;
}