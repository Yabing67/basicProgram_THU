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
	cout << "������һ����С��2������" << endl;
	cin >> N;
	if (N < 2)
	{
		cout << "�������";
	}
	else
	{
		cout << "С�ڵ�����������Ϊ��" << endl;
		for (int i = 2; i <= N; i++)
		{
			if (isPrime(i))
				cout << i << endl;
		}
	}
	return 0;
}
