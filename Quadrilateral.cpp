#include "Quadrilateral.h"
#include <iostream>
#include <string>
using namespace std;


Quadrilateral::Quadrilateral(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D) {
		a = p_a; b = p_b; c = p_c; d = p_d;
		A = p_A; B = p_B; C = p_C; D = p_D;
		name = p_name;
	}

	Quadrilateral::Quadrilateral() {
		a = 10, b = 20, c = 30, d = 40;
		 A = 50, B = 60, C = 70, D = 80;
		 name = "Четырёхугольник: ";
	}

	string Quadrilateral::gets()  { return name; }
	int Quadrilateral::getxa() { return a; }
	int Quadrilateral::getxb() { return b; }
	int Quadrilateral::getxc() { return c; }
	int Quadrilateral::getxd() { return d; }
	int Quadrilateral::getxA() { return A; }
	int Quadrilateral::getxB() { return B; }
	int Quadrilateral::getxC() { return C; }
	int Quadrilateral::getxD() { return D; }

	void Quadrilateral::print_info(){
		cout << gets() << endl << "Стороны: " << "a = " << getxa() << " b = " << getxb() << " c = " << getxc() << " d = " << getxd() << endl;
		cout << "Углы: " << "A = " << getxA() << " B = " << getxB() << " C = " << getxC() << " D = " << getxD() << endl << endl;
	}

