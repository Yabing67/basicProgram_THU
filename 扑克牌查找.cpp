#include<iostream>
using namespace std;

int main()
{
	int cards[13] = {101, 112, 113, 206, 207, 208, 303, 304, 309, 311, 402, 405, 410};
	int pos = -1;
	for (int i = 0; i < 13; i++)
		if (cards[i] == 112)
		{
			pos = i + 1;
			break;
		}
	if (pos == -1)
		cout << "û�ҵ�" << endl;
	else
		cout << "����Q�ǵ�" << pos << "����" << endl;

	return 0;
}