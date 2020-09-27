#include<iostream>
using namespace std;

int main()
{
	int tou,jiao;
	cout << "鸡兔同笼" << endl;
	cout << "请输入一共有几只动物：";
	cin >> tou;
	cout << "请输入一共有几只脚：";
	cin >> jiao;
	if (tou * 2 <= jiao && jiao <= tou * 4)
	{
		for (int i = 0; i <= tou; i++)
			if (i * 2 + 4 * (tou - i) == jiao)
			{
				cout << "鸡的个数为：" << i << "   兔的个数为：" << tou - i;
				return 0;
			}
	}
	else 
		cout << "输入错误";
	cout << "无解" ;
	return 0;
}