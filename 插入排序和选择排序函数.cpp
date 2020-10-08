#include<iostream>
using namespace std;

void InsertSort(int num[], int N)
{
	for (int i = 0; i < N; i++)
	{
		int target = num[i], pos = 0;
		while (target > num[pos])
			pos++;
		for (int j = i; j > pos; j--)
			num[j] = num[j - 1];
		num[pos] = target;
	}
}

void HalfInsertSort(int num[], int N)
{
	int pos;
	for (int i = 0; i < N; i++)
	{
		int low = 0, high = i - 1, middle, pos = i;
		int target = num[i];
		int min = 10001;

		//��һ������num[i]����Сֵ
		for (int k = 0; k < i; k++)
			if (num[k] > num[i])
				if (num[k] < min)
					min = num[k];

		while (low <= high)
		{
			middle = (low + high) / 2;
			if (num[middle] == min)
			{
				pos = middle;
				break;
			}
			else if (num[middle] < num[i])
				low = middle + 1;
			else
				high = middle - 1;
		}
		for (int j = i; j > pos; j--)
			num[j] = num[j - 1];
		num[pos] = target;
	}
}

void SelectionSort(int num[], int N)
{
	for (int i = 0; i < N; i++)
	{
		int min = num[i], min_id = i;
		for (int j = i + 1; j < N; j++)
			if (num[j] < min)
			{
				min_id = j;
				min = num[min_id];
			}
		num[min_id] = num[i];
		num[i] = min;
	}
}

int main()
{
	cout << "#���������ѡ��������#" << endl << endl;
	int num[1001], N;
	cout << "���������еĳ��ȣ�";
	cin >> N;
	cout << "���������������е�Ԫ�أ�" << endl;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	HalfInsertSort(num, N);
	cout << "����������Ϊ��";
	for (int i = 0; i < N; i++)
		cout << num[i] << "  ";
	return 0;
}