#include<iostream>
using namespace std;

int way1(int N) 
{
	int result = 1;
	for (int i = 2; i <= N; i++)
		result = result * i;
	return result;
}

int way2(int N)
{
	int result[1001];
	result[1] = 1;
	for (int i = 2; i <= N; i++)
		result[i] = result[i - 1] * i;
	return result[N];
}

int way3(int N)
{
	if (N == 1)
		return 1;
	return N * way3(N - 1);
}

int main()
{
	int N;
	cout << "请输入你要算阶乘的数：";
	cin >> N;
	cout << N << "的阶乘为："<< endl;
	cout << way1(N) << endl;
	cout << way2(N) << endl;
	cout << way3(N);
	return 0;
}
