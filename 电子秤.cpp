#include <iostream>
using namespace std;

float banana_price = 4.2;
float apple_price = 3.5;
float banana_weight = 0.0;
float apple_weight = 0.0;
float total = 0.0;

int main() {
	cout << "������ƻ��������" << endl;
	cin >> apple_weight;
	cout << "�������㽶������" << endl;
	cin >> banana_weight;

	total = apple_price * apple_weight + banana_price * banana_weight;
	cout << "Ӧ���" << total << endl;
	return 0;
}