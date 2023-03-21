#pragma once
#include "Figure.h"
class Triangle : public Figure {
	int a, b, c;
	int A, B, C;
public:
	Triangle();
	Triangle(int p_a, int p_b, int p_c, int p_A, int p_B, int p_C);
	void show();
};

