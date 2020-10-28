#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("log.txt");
	int count = 0;
	int user_count = 0;
	char ids[600][20];
	while (!fin.eof())
	{
		int year, month, day, hour, minute, second;
		char tmp, id[50], operation[10];
		fin >> year >> tmp >> month >> tmp >> day;
		fin >> hour >> tmp >> minute >> tmp >> second;
		fin >> id;
		fin >> operation;

		int found = -1;
		for (int i = 0; i < user_count; i++)
			if (strcmp(ids[i], id) == 0)
			{
				found = i;
				break;
			}
		if (found == -1)
		{
			user_count++;
			strcpy_s(ids[count], id);
		}
	}
	fin.close();
	cout << user_count << endl;
	return 0;
}