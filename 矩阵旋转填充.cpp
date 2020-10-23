#include<iostream>
using namespace std; 

void fillMatrix(int matrix[101][101], int size, int num, int offset)
{
	//因为剩余矩阵大小开始填充的位置会变，且之后再次调用需要，所以应另设变量
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
	//size - 2 因为上下头各减一
	return;
}

int main()
{
	int matrix[101][101];
	int size;
	cout << "请输入你想填充的矩阵大小：" << endl;
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