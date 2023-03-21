#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle() : Figure(3, "Правильная") {
	a = 10; b = 20; c = 30;
	A = 50; B = 60; C = 70;
}
Triangle::Triangle(int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
	a = p_a; b = p_b; c = p_c;
	A = p_A; B = p_B; C = p_C;
}
void Triangle::show() {
	cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << endl;
	cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << endl << endl;
}
