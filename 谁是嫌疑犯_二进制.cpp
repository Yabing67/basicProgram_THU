#include<iostream>
using namespace std;

int A, B, C, D, E, F;
bool found = false;
int main() {
	bool b1, b2, b3, b4, b5, b6;
	for (int i = 0; i <= (1 << 6); i++)
	{
		A = (i >> 5) & 1;
		B = (i >> 4) & 1;
		C = (i >> 3) & 1;
		D = (i >> 2) & 1;
		E = (i >> 1) & 1;
		F = i & 1;
							
		b1 = A == 1 || B == 1;
		b2 = (A == 1 && E == 1) || (A == 1 && F == 1) || (E == 1 && F == 1);
		b3 = !(A == 1 && D == 1);
		b4 = (B == 1 && C == 1) || (B == 0 && C == 0);
		b5 = (C == 1 && D == 0) || (C == 0 && D == 1);
		b6 = (D == 0 && E == 0) || D == 1;

		if (b1 && b2 && b3 && b4 && b5 && b6)
		{
			cout << "A = " << A << endl;
			cout << "B = " << B << endl;
			cout << "C = " << C << endl;
			cout << "D = " << D << endl;
			cout << "E = " << E << endl;
			cout << "F = " << F << endl;
			break;
		}
	}
	return 0;
}