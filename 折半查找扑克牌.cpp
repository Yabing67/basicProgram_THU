#include<iostream>
using namespace std;

int main()
{
	int cards[13] = { 101, 112, 113, 206, 207, 208, 303, 304, 309, 311, 402, 405, 410 };
	int low = 0, high = 12, middle, target = 112, id = -1;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (cards[middle] == target)
		{
			id = middle;
			break;
		}
		else if (cards[middle] > target)
			high = middle -1;
		else
			low = middle + 1;
	}
	cout << "ºÚÌÒQÊÇµÚ" << id + 1 << "ÕÅÅÆ" << endl;
	return 0;
}