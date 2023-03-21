#include "Figure.h"
#include <iostream>
#include <string>
using namespace std;

Figure::Figure(int n, string a) : side(n), s(a) {}
 void Figure::show3() {
	cout << s << endl << "Количество сторон: " << side << endl;
}
Figure::Figure()
{
	side = 0;
	s = "Правильная";
}
