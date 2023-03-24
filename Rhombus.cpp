#include "Rhombus.h"

Rhombus::Rhombus(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D)  {
		if (p_a == p_c && p_c == p_b && p_b == p_d && p_d == p_a && p_A == p_C && p_B == p_D) {
			a = p_a; b = p_b; c = p_c; d = p_d;
			A = p_A; B = p_B; C = p_C; D = p_D;
			name = p_name;
		}
		else {
			throw domain_error( "Неверные данные. Ромб (все стороны равны, углы A,C и B,D попарно равны)");
		}
	}
