#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "#�ۻ��������Ϸ#" << endl << endl;
	int N, n, num = 0, count = 1, Len;
	cout << "���������ַ�Χ��";
	cin >> N;
	int low = 0, high = N;
	cout << "��������������֣�";
	cin >> n;
	if (n > N)
	{
		cout << "�������" << endl;
		return 0;
	}
	//cout << "\r";
	//string str1, str2;
	//str1 = n;
	//str2 = "��������������֣�";
	//Len = str1.length() + str2.length();
	//for (int i = 1; i <= Len; i++)
		//cout << " ";

	while (low <= high)
	{
		cout << "��������µ����֣�" <<"��ΧΪ("<< low << "��" << high << ")" << endl;
		cin >> num;
		if (num == n)
			break;
		else if (num > n && num < high)
		{
			high = num;
			cout << "��ϲ��ͨ���˵�" << count << "��" << endl;
			count++;
			
		}
		else if (num < n && num > low)
		{
			low = num;
			cout << "��ϲ��ͨ���˵�" << count << "��" << endl;
			count++;
			
		}
		else
			cout << "�������" << endl;

	}
	cout << "��¶��ˣ����µ�����Ϊ��" << num << endl;
	cout << "��Ϸ������"<< count <<"��";
	return 0;
}