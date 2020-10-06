#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "#聚会猜数字游戏#" << endl << endl;
	int N, n, num = 0, count = 1, Len;
	cout << "请输入数字范围：";
	cin >> N;
	int low = 0, high = N;
	cout << "请输入你想的数字：";
	cin >> n;
	if (n > N)
	{
		cout << "输入错误" << endl;
		return 0;
	}
	//cout << "\r";
	//string str1, str2;
	//str1 = n;
	//str2 = "请输入你想的数字：";
	//Len = str1.length() + str2.length();
	//for (int i = 1; i <= Len; i++)
		//cout << " ";

	while (low <= high)
	{
		cout << "请输入你猜的数字：" <<"范围为("<< low << "到" << high << ")" << endl;
		cin >> num;
		if (num == n)
			break;
		else if (num > n && num < high)
		{
			high = num;
			cout << "恭喜你通过了第" << count << "轮" << endl;
			count++;
			
		}
		else if (num < n && num > low)
		{
			low = num;
			cout << "恭喜你通过了第" << count << "轮" << endl;
			count++;
			
		}
		else
			cout << "输入错误" << endl;

	}
	cout << "你猜对了，被猜的数字为：" << num << endl;
	cout << "游戏进行了"<< count <<"轮";
	return 0;
}