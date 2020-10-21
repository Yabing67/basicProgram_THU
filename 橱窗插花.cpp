#include<iostream>
using namespace std;

void ToBinary(int num, int binary[], int v)
{
	for (int i = 0; i < v; i++)
	{
		binary[i] = num & 1;//ȡ���λ
		num = num >> 1;//����һλ
	}
	return;
}

int Count1(int binary[], int v)
{
	int count = 0;
	for (int i = 0; i < v; i++)
		count += binary[i]; //������ֻ��1����0��ֱ�ӼӾ���1�ĸ���
	return count;
}

int main()
{
	int V = 5, F = 3;
	int binary[5];
	int Beauty[5][3] = {
		{7, 5, -21},
		{23, 21, 5},
		{-5, -4, -4},
		{-24, 10, -20},
		{16, 23, 20} };
	int best_beauty = 0, best_plan = 0;

	//ö�����п��ܵķ���
	for (int i = 0; i < (1 << V); i++)
	{
		ToBinary(i, binary, V);
		if (Count1(binary, V) != F)
			continue;

		int sum = 0;
		for (int vase = 0, flower = 0; vase < V; vase++)
		{
			if (binary[vase] == 1)
			{
				sum += Beauty[vase][flower];
				flower++;
			}
		}
		if (sum > best_beauty)
		{
			best_beauty = sum;
			best_plan = i;
		}
	}

	//�����
	cout << "������еĵ÷ֺͣ�" << best_beauty << endl;
	cout << "��ƿ�ڷţ�";
	for (int i = 0; i < 5; i++)
		cout << i;
	cout << endl;
	cout << "�廨������";
	ToBinary(best_plan, binary, V);
	int flower = 1;
	for (int i = 0; i < V; i++)
		if (binary[i] == 1)
		{
			cout << flower;
			flower++;
		}
		else
			cout << 0;
	return 0;
}