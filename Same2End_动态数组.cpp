#include<iostream>
using namespace std;

template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

int main()
{
	char symbol_list[] = { 'L', 'F', 'A', 'B', 'F', 'C', 'F', 'O', 'F', 'U', 'F', 'R', 'F', 'S', 'E' };
	char symbol[] = { 'F' };
	int len, count = 0;
	len = getArrayLen(symbol_list);
	for (int i = 1; i < len; i++)
		if (symbol_list[i] == symbol[0])
			count++;

	char* tmp = new char[len];
	int j = 0;
	for (int i = 0; i < len; i++)
		if (symbol_list[i] != symbol[0])
			tmp[j++] = symbol_list[i];

	for (int i = 0; i < len - count; i++)
		symbol_list[i] = tmp[i];
	for (int i = len - count; i < len; i++)
		symbol_list[i] = symbol[0];

	for (int i = 0; i < len; i++)
		cout << symbol_list[i] << " ";
	delete[] tmp;
	return 0;
}