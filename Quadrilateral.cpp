#include "Quadrilateral.h"
#include <iostream>
using namespace std;

Quadrilateral::Quadrilateral(): Figure(4, "Неправильная") {
	a = 10; b = 20; c = 30; d = 40;
	A = 50; B = 60; C = 70; D = 80;
}
Quadrilateral::Quadrilateral(int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D)
{
	a = p_a; b = p_b; c = p_c; d = p_d;
	A = p_A; B = p_B; C = p_C; D = p_D;
}

void Quadrilateral::show2() {
	cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << endl;
	cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << endl << endl;
}

