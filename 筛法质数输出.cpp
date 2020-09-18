#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "请输入一个不小于2的数：" << endl;
	cin >> N;
	bool seive[1001];
	for (int i = 2; i <= N; i++)
		seive[i] = true;
	for (int d = 2; d * d <= N; d++)
		if (seive[d])
		{
			for (int n = d * d; n <= N; n += d)
				seive[n] = false;
		}
	cout << "小于等于它的素数为：" << endl;
	for (int i = 2; i <= N; i++ )
		if (seive[i])
			cout << i << endl;
	return 0;
}
