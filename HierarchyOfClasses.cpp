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

	try {
		Figure* tri = new Triangle("Треугольник", 10, 20, 30, 50, 60, 70);
		tri->print_info();
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* rec = new Rectangular("Прямоугольный треугольник:", 10, 20, 10, 50, 60, 90);
		rec->print_info();
		delete rec;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* iso = new Isosceles("Равнобедренный треугольник: ", 10, 20, 10, 50, 60, 50);
		iso->print_info();
		delete iso;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* equ = new Equilateral("Равносторонний треугольник: ", 30, 30, 30, 60, 60, 60);
		equ->print_info();
		delete equ;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* qua = new Quadrilateral("Четырёхугольник: ", 10, 20, 30, 40, 50, 60, 70, 80);
		qua->print_info();
		delete qua;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* rect = new Rectangle("Прямоугольник: ", 10, 20, 10, 20, 90, 90, 90, 90);
		rect->print_info();
		delete rect;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* squ = new Square("Квадрат: ", 20, 20, 20, 20, 90, 90, 90, 90);
		squ->print_info();
		delete squ;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}

	try {
		Figure* par = new Parallelogram("Параллелограмм: ", 20, 30, 20, 30, 30, 40, 30, 40);
		par->print_info();
		delete par;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
	try {
		Figure* rho = new Rhombus("Ромб: ", 30, 30, 30, 30, 30, 40, 30, 40);
		rho->print_info();
		delete rho;
	}
	catch (domain_error& ex) {
		cout << "Ошибка создания фигуры. Причина: " << ex.what() << endl << endl;
	}
};