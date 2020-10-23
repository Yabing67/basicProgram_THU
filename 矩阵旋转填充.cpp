#include<iostream>
using namespace std; 

void fillMatrix(int matrix[101][101], int size, int num, int offset)
{
	//��Ϊʣ������С��ʼ����λ�û�䣬��֮���ٴε�����Ҫ������Ӧ�������
	if (size == 0)
		return;
	if (size == 1)
	{
		matrix[offset][offset] = num;
		return;
	}
	for (int i = 0; i < size - 1; i++)
	{
		matrix[offset + i][offset] = num + i;
		matrix[offset + size - 1][offset + i] = num + size - 1 + i;
		matrix[offset + size - 1 - i][offset + size - 1] = num + 2 * (size - 1) + i;
		matrix[offset][offset + size - 1 - i] = num + 3 * (size - 1) + i;
	}
	fillMatrix(matrix, size - 2, num + 4 * (size - 1), offset + 1);
	//size - 2 ��Ϊ����ͷ����һ
	return;
}

int main()
{
	int matrix[101][101];
	int size;
	cout << "�������������ľ����С��" << endl;
	cin >> size;
	fillMatrix(matrix, size, 1, 0);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == size - 1)
				cout << matrix[i][j] << "  ";
			else
				cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}