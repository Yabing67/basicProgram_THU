#include<iostream>
using namespace std;

template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}
int main()
{
	const char* symbol_list[] = { "L", "F", "A", "B", "F", "C", "F", "O", "F", "U", "F", "R", "F", "S", "E" };
	const char* symbol[] = { "F" };
	int len;
	int count = 0;
	len = getArrayLen(symbol_list);

	for (int i = 1; i < len; i++)
	{
		int id = i;
		while (symbol_list[id - 1] == symbol[0])
		{
			const char* a;
			a = symbol_list[id];
			symbol_list[id] = symbol_list[id - 1];
			symbol_list[id - 1] = a;
			id--;
		}
	}
	for (int i = 0; i < len; i++)
		cout << symbol_list[i] << " ";
	return 0;
}