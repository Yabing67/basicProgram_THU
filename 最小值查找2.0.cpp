#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "��������һ�ҳ����ƣ�"<< endl;
	cin >> N;
	int num[13] = { 101, 112, 113, 206, 207, 208, 303, 304, 309, 311, 402, 405, 410 };
	int min, pos = -1;
	//�Ҵ���N����Сֵ
	for (int i = 0; i < 13; i++)
		if (num[i] > N)
		{
			min = num[i];
			pos = i;
			break;
		}
	// ��������һ��ֱ�ӻ�Ϊint min = 1001;
	for (int i = 0; i < 13; i++)
		if (num[i] > N)
			if (num[i] < min)
			{
				min = num[i];
				pos = i;
			}
	if (pos == -1)
		cout << "û�ҵ�";
	else
	{
		cout << "Ӧ�ô������Ϊ" << min << endl;
		cout << "���ڵ�" << pos + 1 << "��" << endl;
	}
	return 0;
}