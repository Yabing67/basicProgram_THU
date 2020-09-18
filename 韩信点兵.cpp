#include<iostream>
using namespace std;

int N = 100;
int r3, r5, r7, seive[1000];

int main()
{
	cout << "请输入除以3的余数：" << endl;
	cin >> r3;
	cout << "请输入除以5的余数：" << endl;
	cin >> r5;
	cout << "请输入除以7的余数：" << endl;
	cin >> r7;
	for (int i = r3; i <= N; i += 3)
		seive[i]++;
	for (int i = r5; i <= N; i += 5)
		seive[i]++;
	for (int i = r7; i <= N; i += 7)
		seive[i]++;
	for (int i = 0; i <= 1000; i++)
		if (seive[i] == 3)
		{
			cout << "满足符合条件最小的数为："<<i << endl;
			break;
		}
	return 0;
}