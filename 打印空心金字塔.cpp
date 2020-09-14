#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "ÇëÊäÈë½ğ×ÖËş²ãÊı:";
	cin >> N;
	for (int line = 1; line <= N; line++)
	{
		if (line == 1)
		{
			for (int i = 1; i <= N - line; i++)
				cout << " ";
			cout << "*" << endl;
		}
		else if (line == N)
			for (int i = 1; i <= 2 * N - 1; i++)
				cout << "*";
		else 
		{
			for (int i = 1; i <= N - line; i++)
				cout << " ";
			cout << "*";
			for (int i = N - line + 2; i <= 2 * N -1 - (N - line) - 1; i++)
				cout << " ";
			cout << "*"<< endl;
		}
		
	}
	return 0;
}
