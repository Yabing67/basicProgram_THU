#include<iostream>
using namespace std;

template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

int main()
{
	int num[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8 };
	int len, target;
	len = getArrayLen(num);
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
		{
			if (num[j] == num[i])
				continue;
			else
			{
				target = num[i];
				break;
			}
		}
	cout << "The only once appeared number is:" << target<<endl;
	cout << len;
	return 0;
}