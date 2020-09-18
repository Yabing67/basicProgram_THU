#include<iostream>
using namespace std;

int main() {

	int N = 1000;
	int r3, r5, r7;
	cout << "请输入除以3的余数：" << endl;
	cin >> r3;
	cout << "请输入除以5的余数：" << endl;
	cin >> r5;
	cout << "请输入除以7的余数：" << endl;
	cin >> r7;
	for (int i = 0; i <= N; i++)
		if (i % 3 == r3 && i % 5 == r5 && i % 7 == r7)
		{
			cout << "满足符合条件最小的数为：" << i << endl;
			break;
		}
	return 0;
}