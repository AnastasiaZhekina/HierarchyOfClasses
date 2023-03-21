#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangular.h"
#include "Rectangular2.h"
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

	Figure fig;
	cout << "Фигура: " << endl;
	fig.show3();

	cout << endl;

	Triangle tri;
	cout << "Треугольник: " << endl;
	tri.show3();
	tri.show();

	Rectangular rec;
	cout << "Прямоугольный треугольник: " << endl;
	rec.show3();
	rec.show();

	Rectangular2 rec2;
	cout << "Прямоугольный треугольник: " << endl;
	rec2.show3();
	rec2.show();

	Isosceles iso;
	cout << "Равнобедренный треугольник: " << endl;
	iso.show3();
	iso.show();

	Equilateral equ;
	cout << "Равносторонний треугольник: " << endl;
	equ.show3();
	equ.show();

	Quadrilateral qua;
	cout << "Четырёхугольник: " << endl;
	qua.show3();
	qua.show2();

	Rectangle rect;
	cout << "Прямоугольник: " << endl;
	rect.show3();
	rect.show2();

	Square squ;
	cout << "Квадрат: " << endl;
	squ.show3();
	squ.show2();

	Parallelogram par;
	cout << "Параллелограмм: " << endl;
	par.show3();
	par.show2();

	Rhombus rho;
	cout << "Ромб: " << endl;
	rho.show3();
	rho.show2();
};