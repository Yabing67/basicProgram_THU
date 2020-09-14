#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "ÇëÊäÈë½ð×ÖËþ²ãÊý£º";
	cin >> N;
	for (int line = N; line >= 1; line--)
	{
		for (int i = N - line; i >= 1; i--)
			cout << " ";
		for (int j = 2 * line - 1; j >= 1; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}