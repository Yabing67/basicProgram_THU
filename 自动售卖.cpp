#include<iostream>
#include<cstdlib>
//#include<cmath>
#include<iomanip>
using namespace std;

double apple_price = 3.5, banana_price = 4.2;
double sum = 0;
double apple_weight = 0, banana_weight = 0;

void showMenu() {
	cout << "************************************" << endl;
	cout << "*��ӭʹ���Զ�������������������ѡ��*" << endl;
	cout << "*1. �¶���                         *" << endl;
	cout << "*2. �˳��Զ�����                   *" << endl;
	cout << "************************************" << endl;
}

void showSubMenu() {
	cout << "++++++++++++++++++++++++++++++++++++" << endl;
	cout << "+��������Ҫ���еĲ�����            +" << endl;
	cout << "+1. ����ƻ����3.5Ԫ/���         +" << endl;
	cout << "+2. �����㽶��4.2Ԫ/���         +" << endl;
	cout << "+3. ����                           +" << endl;
	cout << "+4. ��������                       +" << endl;
	cout << "++++++++++++++++++++++++++++++++++++" << endl;
}

int GetInteger() {

	char buf[100] = { 0 };
	while (strlen(buf) == 0)
		cin.getline(buf, 100);
	return atoi(buf);
}

double GetDouble() {

	char buf[100] = { 0 };
	while (strlen(buf) == 0)
		cin.getline(buf, 100);
	return atof(buf);
}

void dealOrder() {
	while (1) 
	{
		showSubMenu();
		cout << "��Ŀǰ������" << apple_weight << "����ƻ��";
		cout << "��" << banana_weight << "�����㽶�� " ;
		cout << "�ܼ�Ϊ��" << fixed << setprecision(2)
			<< setw(8) << sum << "Ԫ" << endl;//���������ʽ
		cout << "����ѡ���ǣ�" << endl;
		//int input = GetInteger();
		int input;
		cin >> input;
		int weight;
		//int weight = GetDouble();
		switch (input)
		{
		case 1:
			cout << "��������أ������" << endl;
			cin >> weight;
			cout << endl;
			apple_weight += weight;
			sum += apple_price * weight;
			break;
		case 2:
			cout << "��������أ����" << endl;
			cin >> weight;
			banana_weight += weight;
			sum += banana_price * weight;
			break;
		case 3:
			if (sum > 1E-6)//ȷ������ˮ��
			{
				cout << "��һ��������";
				if (fabs(apple_weight) > 1E-6)
					cout << apple_weight << "����ƻ��";
				if (fabs(banana_weight) > 1E-6)
					cout << "��" << banana_weight << "�����㽶�� ";
				cout << "��Ӧ�����ܼ�Ϊ��" << sum << "Ԫ" << endl;
				system("pause");
				system("cls");
			}
			return;
		case 4:
			return;
		}
	}
}


int main()
{
	while(1)
	{
		sum = 0;
		apple_weight = 0;
		banana_weight = 0;
		showMenu();
		cout << "����ѡ���ǣ�" << endl;
		int input;
		//int input = GetInteger();
		cin >> input;
		cout << endl;
		switch (input)
		{
		case 1:
			dealOrder();
			break;
		case 2:
			return 0;
		}
	}
}