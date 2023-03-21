#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure {
protected:
	int side;
	string s;
public:
	Figure(int n, string a)
		;
	Figure();

	virtual void show3();

};
