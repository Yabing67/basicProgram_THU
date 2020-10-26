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
	int len, count = 0;
	len = getArrayLen(num);
	bool seive[1001];
	for (int i = 0; i < len; i++)
		seive[i] = true;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < i; j++)
			if (num[j] == num[i])
				seive[i] = false;
		if (seive[i])
			count++;
	}
	cout << "There are only " << count << " unique numbers" << endl;
	cout << "The only once appeared number is:" << endl;
	for (int i = 0; i < len; i++)
		if (seive[i])
			cout << num[i] << " ";
	return 0;
}
