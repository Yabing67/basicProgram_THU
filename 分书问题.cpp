#include<iostream>
using namespace std;

int Num = 0, take[5];
int like[5][5] = {
	{0, 0, 1, 1, 0},
	{1, 1, 0, 0, 1},
	{0, 1, 1, 0, 1},
	{0, 0, 0, 1, 0},
	{0, 1, 0, 0, 1}
};
bool assigned[5];

void Try(int id)
{
	if (id == 5)
	{
		Num++;
		cout << "��" << Num << "������:"<< endl;
		for (int i = 0; i < 5; i++)
			cout << take[i] << " ";
		cout << endl;
		return;
	}
	for (int book = 0; book < 5; book++)
	{
		if (like[id][book] == 1 && !assigned[book])
		{
			//��¼��ǰ��ķ������
			take[id] = book;
			assigned[book] = true;	

			//Ϊ��һλ���߷����鼮
			Try(id ++);

			//�����˻���������һ�ַ��䷽��
			assigned[book] = false;
		}	
	}
}


int main()
{
	for (int i = 0; i < 5; i++)
		assigned[i] = false;//ֵ�ĳ�ʼ��һ��д��������
	Try(0);
	return 0;
}