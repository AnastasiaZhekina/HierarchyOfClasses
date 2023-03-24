#pragma once
#include <string>
#include "Figure.h"

class Triangle : public Figure {
protected:
	int a, b, c;
	int A, B, C;
	string name;
public:

	Triangle(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C);
	string gets() override;
	int getxa() override;
	int getxb();
	int getxc();
	int getxA()override;
	int getxB();
	int getxC();

	Triangle();

	void print_info() override;
	
};
