#include "punto.h"

int main(void){
	Point p = {1,1};
	p.print();
	Point p2 = {1,1};
	p.suma1(p2);
	p.print();
	p.suma2(p2);
	Point * p3 = new Point(2, 2);
	p.suma3(p3);
	p.print();

	return 0;
}
