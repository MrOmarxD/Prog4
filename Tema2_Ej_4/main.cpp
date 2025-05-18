#include "punto.h"
#include <iostream>
using namespace std;

int main(void){
	Point p (1,1);
	Point *p2 = new Point(2,2);
	p.print();
	p.setX(2);
	p.setY(2);
	cout<< "Cambio de valor x = " << p.getX() <<endl;
	cout<< "Cambio de valor y = " << p.getY() <<endl;

	const Point &pCounst = p;
	cout<< "Valor x de pCounst = " << pCounst.getX() <<endl;

	return 0;
}
