#include "Figure.h"
#include <iostream>
#include <string>
using namespace std;

 string Figure::gets() { return name; }
int Figure::getxa() { return a; }
int Figure::getxA() { return A; }
void Figure::print_info() {
	cout << gets() << endl << "�������: " << getxa() << endl << "����: " << getxA();
}
	Figure::Figure(){ name = "������";
	 a = 0;
	 A = 0;
	}
