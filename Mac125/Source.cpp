#include <iostream>
using namespace std;

class coord{
public:
	coord();
	coord(int,int);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	void print();
private:
	int y;
	int x;
};

coord::coord(){
	setX(0);
	setY(0);
}
coord::coord(int newX,int newY){
	setX(newX);
	setY(newY);
}
int coord::getX(){
	return x;
}
int coord::getY(){
	return y;
}
void coord::setX(int newX){
	x = newX;
}
void coord::setY(int newY){
	y=newY;
}
void coord::print(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main()
{
	coord c1(3,4),c2(1,2);

	c1.print();
	c2.print();


	return 0;
}

