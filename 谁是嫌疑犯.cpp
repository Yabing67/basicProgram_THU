#include<iostream>
using namespace std;

int A, B, C, D, E, F;
bool found = false;
int main(){
	bool b1, b2, b3, b4, b5, b6;
	for (int A = 0;A <= 1 && found == false;A++)
		for (int B = 0; B <= 1 && found == false; B++)
			for (int C = 0; C <= 1 && found == false; C++)
				for (int D = 0; D <= 1 && found == false; D++)
					for (int E = 0; E <= 1 && found == false; E++)
						for (int F = 0; F <= 1 && found == false; F++)
						{
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
								found = true;
							}
						}
	return 0;
}