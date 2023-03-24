#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure {
protected:
	string name;
	int a ;
	int A;
public:
	virtual string gets();
	virtual	int getxa();
	virtual int getxA();
	virtual void print_info();
	Figure();
};
