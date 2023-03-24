#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangular.h"
#include "Isosceles.h"
#include "Equilateral.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");


	Triangle tri;
	tri.print_info();

	Figure* rec = new Rectangular("Прямоугольный треугольник:", 10, 20, 10, 50, 60, 90);
	rec->print_info();

	Figure* iso = new Isosceles("Равнобедренный треугольник: ", 10, 20, 10, 50, 60, 50);
	iso->print_info();

	Figure* equ = new Equilateral("Равносторонний треугольник: ", 30, 30, 30, 60, 60, 60);
	equ->print_info();

	Figure* qua = new Quadrilateral;
	qua->print_info();

	Figure* rect = new Rectangle("Прямоугольник: ", 10, 20, 10, 20, 90, 90, 90, 90);
	rect->print_info();

	Figure* squ = new Square("Квадрат: ", 20, 20, 20, 20, 90, 90, 90, 90);
	squ->print_info();

	Figure* par = new Parallelogram("Параллелограмм: ", 20, 30, 20, 30, 30, 40, 30, 40);
	par->print_info();

	Figure* rho = new Rhombus("Ромб: ", 30, 30, 30, 30, 30, 40, 30, 40);
	rho->print_info();

	delete rec;
	delete iso;
	delete equ;
	delete qua;
	delete rect;
	delete par;
	delete rho;
};