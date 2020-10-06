#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "请输入上一家出的牌："<< endl;
	cin >> N;
	int num[13] = { 101, 112, 113, 206, 207, 208, 303, 304, 309, 311, 402, 405, 410 };
	int min, pos = -1;
	//找大于N的最小值
	for (int i = 0; i < 13; i++)
		if (num[i] > N)
		{
			min = num[i];
			pos = i;
			break;
		}
	// 或以上这一段直接换为int min = 1001;
	for (int i = 0; i < 13; i++)
		if (num[i] > N)
			if (num[i] < min)
			{
				min = num[i];
				pos = i;
			}
	if (pos == -1)
		cout << "没找到";
	else
	{
		cout << "应该打出的牌为" << min << endl;
		cout << "它在第" << pos + 1 << "张" << endl;
	}
	return 0;
}