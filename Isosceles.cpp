#include "Isosceles.h"

 Isosceles::Isosceles(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
		if (p_a == p_c && p_A == p_C) {
			a = p_a; b = p_b; c = p_c;
			A = p_A; B = p_B; C = p_C;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Равнобедренный треугольник (стороны a и c равны, углы A и C равны)" << endl;
			exit(1);
		}
	}
