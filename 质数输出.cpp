#include<iostream>
using namespace std;
int N;

bool isPrime(int n)
{	
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
	
	//for (int i = 2; i < n; i++)
	//{
		//if (n % i == 0)
			//return false;
	//}
	//return true;
}
int main(){
	cout << "请输入一个不小于2的数：" << endl;
	cin >> N;
	if (N < 2)
	{
		cout << "输入错误";
	}
	else
	{
		cout << "小于等于它的素数为：" << endl;
		for (int i = 2; i <= N; i++)
		{
			if (isPrime(i))
				cout << i << endl;
		}
	}
	return 0;
}
