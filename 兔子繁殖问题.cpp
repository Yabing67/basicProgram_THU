#include<iostream>
using namespace std;

int main()
{
	int small[12], big[12];
	small[1] = 1;
	big[1] = 0;
	int n;
	cout << "��������Ҫ��ڼ������£�������������" << endl;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		small[i] = big[i - 1];
		big[i] = small[i - 1] + big[i - 1];
	}
	cout << "��������Ϊ��"  << big[n] + small[n] << "��";
	return 0;
}