#ifndef PUNTO_H_
#define PUNTO_H_

class Point
{
private:
	float x, y;
public:
	Point(int x, int y);
	void setX(float x);
	void setY(float y);
	float getX() const;
	float getY() const;
	void sumar(const Point &p);
	void print();
};

#endif /* PUNTO_H_ */
