#include "punto.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::suma1(Point p) {
	this->x = this->x + p.x;
	this->y = this->y + p.y;
}

void Point::suma2(Point &p) {
	this->x = this->x + p.x;
	this->y = this->y + p.y;
}

void Point::suma3(Point *p) {
	this->x = this->x + p->x;
	this->y = this->y + p->y;
}

Point Point::getSuma(Point &p) {
	p.x = this->x + p.x;
	p.y = this->y + p.y;
	return p;
}

void Point::print() {
	cout << "(" << this->x << ", " << this->y << ")" << endl;
}

void Point::swap1(Point p) {
	Point aux(this->x, this->y);
	this->x = p.x;
	this->y = p.y;
	p.x = aux.x;
	p.y = aux.y;
}

void Point::swap2(Point &p) {
	Point aux(this->x, this->y);
	this->x = p.x;
	this->y = p.y;
	p.x = aux.x;
	p.y = aux.y;
}

void Point::swap3(Point *p) {
	Point aux(this->x, this->y);
	this->x = p->x;
	this->y = p->y;
	p->x = aux.x;
	p->y = aux.y;
}
