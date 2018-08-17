#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	Point();
	Point(double, double);
	void setX(double);
	void setY(double);
	void setPoint(double, double);
	void movePoint(double, double);
	void rotate();
	double getX();
	double getY();
	void print();
};

Point::Point() {
	setPoint(0, 0);
}
Point::Point(double x, double y){
	setPoint(x, y);
}
void Point::setX(double x){
	this->x = x;
}
void Point::setY(double y){
	this->y = y;
}
void Point::setPoint(double x, double y){
	setX(x);
	setY(y);
}
void Point::movePoint(double xMove, double yMove){
	x += xMove;
	y += yMove;
}

void Point::rotate(){
	double temp = x;
	x = -y;
	y = temp;
}

double Point::getX() { return x; }
double Point::getY() { return y; }

void Point::print() {
	cout << "(" << x << "," << y << ")" << endl;
}

int main()
{
	Point p;
	p.print();
	p.movePoint(1, -2);

	p.print();

	p.rotate();

	p.print();
	p.rotate();

	p.print();

	return 0;
}