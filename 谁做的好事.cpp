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
			cout << "�����µ�����:" << good_man<<endl;
			break;
		}
	}
	return 0;
}