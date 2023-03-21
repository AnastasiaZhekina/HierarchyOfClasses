#pragma once
#include "Figure.h"

class Quadrilateral :
	public Figure
{
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrilateral(); 
	Quadrilateral(int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D); 
	void show2();
};
