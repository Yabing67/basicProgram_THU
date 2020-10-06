#include<iostream>
using namespace std;

int main()
{
	cout << "#数列排序输出#" << endl << endl;
	int num[1001], N;
	cout << "请输入数列的长度：";
	cin >> N;
	cout << "请依次输入数列中的元素："<< endl;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	for (int i = 0; i < N; i++)
	{
		int target = num[i], pos = 0;
		while (target > num[pos])
			pos++;
		for (int j = i; j > pos; j--)
			num[j] = num[j - 1];
		num[pos] = target;
	}
	cout << "排序后的数列为：";
	for (int i = 0; i < N; i++)
		cout << num[i] << "  ";
	return 0;
}