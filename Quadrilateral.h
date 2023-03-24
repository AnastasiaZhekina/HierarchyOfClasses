#pragma once
#include "Figure.h"
#include <string>

class Quadrilateral :public Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
	string name;
public:
	Quadrilateral(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D);
	Quadrilateral();

	string gets() override;
	int getxa();
	int getxb();
	int getxc();
	int getxd();
	int getxA() override;
	int getxB();
	int getxC();
	int getxD();

	void print_info() override;
	
};