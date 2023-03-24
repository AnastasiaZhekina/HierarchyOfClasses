#include "Rectangular.h"
#include <string>

 Rectangular::Rectangular(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C)  {
		if (p_C == 90) {
			a = p_a; b = p_b; c = p_c;
			A = p_A; B = p_B; C = p_C;
			name = p_name;
		}
		else {
			throw domain_error(  "Неверные данные. Прямоугольный треугольник (угол C всегда равен 90)" );
		}
	}
