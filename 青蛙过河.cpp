#include<iostream>
using namespace std;

int Jump(int s, int y) 
{
	if (s == 0)
		return y + 1;
	else
		return 2 * Jump(s - 1, y);
}
int main()
{
	cout << "#青蛙过河#" << endl;
	int s, y;
	cout << "请输入石柱的个数" << endl;
	cin >> s;
	cout << "请输入荷叶的个数" << endl;
	cin >> y;
	cout << "最多可以跳过去" << Jump(s, y) << "只青蛙";
	return 0;
}