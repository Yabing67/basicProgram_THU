#include<iostream>
using namespace std;

int Jump(int s, int y) 
{
	if (s == 0)
		return y + 1;
	else
		return 2 * Jump(s - 1, y);
}
int main()
{
	cout << "#���ܹ���#" << endl;
	int s, y;
	cout << "������ʯ���ĸ���" << endl;
	cin >> s;
	cout << "�������Ҷ�ĸ���" << endl;
	cin >> y;
	cout << "����������ȥ" << Jump(s, y) << "ֻ����";
	return 0;
}