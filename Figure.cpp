#include "Figure.h"
#include <iostream>
#include <string>
using namespace std;

 string Figure::gets() { return name; }
int Figure::getxa() { return a; }
int Figure::getxA() { return A; }
void Figure::print_info() {
	cout << gets() << endl << "Стороны: " << getxa() << endl << "Углы: " << getxA();
}
	Figure::Figure(){ name = "Фигура";
	 a = 0;
	 A = 0;
	}
