#include<iostream>
using namespace std;

char good_man;
//int count = 0;
int main() {
	//int count = 0;
	for (good_man = 'A'; good_man <= 'D'; good_man++) {
		int count = 0;
		if (good_man != 'A')
			count++;
		if (good_man == 'C')
			count++;
		if (good_man == 'D')
			count++;
		if (good_man != 'D')
			count++;
		if (count == 3)
		{
			cout << "做好事的人是:" << good_man<<endl;
			break;
		}
	}
	return 0;
}