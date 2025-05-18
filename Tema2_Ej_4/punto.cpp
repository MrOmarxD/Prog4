#include "punto.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::print() {
	cout << "(" << this->x << ", " << this->y << ")" << endl;
}

void Point::setX(float x) {
	this->x = x;
}

void Point::setY(float y) {
	this->y = y;
}

float Point::getX() const {
	return this->x;
}

float Point::getY() const {
	return this->y;
}

void Point::sumar(const Point &p) {
	this->x = this->x + p.x;
	this->y = this->y + p.y;
}
