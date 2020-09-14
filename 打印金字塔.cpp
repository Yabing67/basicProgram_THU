#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "ÇëÊäÈë½ğ×ÖËş²ãÊı£º";
	cin >> N;
	for (int line = 1; line <= N; line++)
	{
		for (int i = 1; i <= N - line; i++)
			cout << " ";
		for (int j = 1; j <= 2 * line - 1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}