#include<iostream>
using namespace std;

int main()
{
	int tou,jiao;
	cout << "����ͬ��" << endl;
	cout << "������һ���м�ֻ���";
	cin >> tou;
	cout << "������һ���м�ֻ�ţ�";
	cin >> jiao;
	if (tou * 2 <= jiao && jiao <= tou * 4)
	{
		for (int i = 0; i <= tou; i++)
			if (i * 2 + 4 * (tou - i) == jiao)
			{
				cout << "���ĸ���Ϊ��" << i << "   �õĸ���Ϊ��" << tou - i;
				return 0;
			}
	}
	else 
		cout << "�������";
	cout << "�޽�" ;
	return 0;
}