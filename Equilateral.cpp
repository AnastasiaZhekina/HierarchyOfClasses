#include "Equilateral.h"


 Equilateral::Equilateral(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
		if (p_a == p_b && p_b == p_c && p_A == 60 && p_B == 60 && p_C == 60) {
			a = p_a; b = p_b; c = p_c;
			A = p_A; B = p_B; C = p_C;
			name = p_name;
		}
		else {
			throw domain_error( "Неверные данные. Равносторонний треугольник (все стороны равны, все углы равны 60)");
		}
	}



