#include<iostream>
using namespace std;

int Num = 0, take[5];
int like[5][5] = {
	{0, 0, 1, 1, 0},
	{1, 1, 0, 0, 1},
	{0, 1, 1, 0, 1},
	{0, 0, 0, 1, 0},
	{0, 1, 0, 0, 1}
};
bool assigned[5];

void Try(int id)
{
	if (id == 5)
	{
		Num++;
		cout << "第" << Num << "个方案:"<< endl;
		for (int i = 0; i < 5; i++)
			cout << take[i] << " ";
		cout << endl;
		return;
	}
	for (int book = 0; book < 5; book++)
	{
		if (like[id][book] == 1 && !assigned[book])
		{
			//记录当前书的分配情况
			take[id] = book;
			assigned[book] = true;	

			//为下一位读者分配书籍
			Try(id ++);

			//将书退还，尝试另一种分配方案
			assigned[book] = false;
		}	
	}
}


int main()
{
	for (int i = 0; i < 5; i++)
		assigned[i] = false;//值的初始化一般写在主函数
	Try(0);
	return 0;
}