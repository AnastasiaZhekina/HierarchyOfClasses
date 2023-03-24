#include "Triangle.h"
#include <iostream>
#include <string>
using namespace std;


Triangle::Triangle(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
	if (180 == p_A + p_B + p_C) {
		a = p_a; b = p_b; c = p_c;
		A = p_A; B = p_B; C = p_C;
		name = p_name;
	}
	else { throw domain_error("Неверные данные, сумма углов должна равна 180)"); }
	}
	string Triangle::gets()  { return name; }
	int Triangle::getxa() { return a; }
	int Triangle::getxb() { return b; }
	int Triangle::getxc() { return c; }
	int Triangle::getxA(){ return A; }
	int Triangle::getxB() { return B; }
	int Triangle::getxC() { return C; }

	Triangle::Triangle() {
		a = 10; b = 20; c = 30;
		A = 50; B = 60; C = 70;
		name = "Треугольник";
	}

	void Triangle::print_info() {
		cout << gets() << "(стороны " << getxa() << ", " << getxb() << ", " << getxc() << "; ";
		cout << "углы " << getxA() << ", " << getxB() << ", " << getxC() << ") " << "создан " << endl << endl;;
	}
