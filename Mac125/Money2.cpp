#include <iostream>
#include <cmath>

using namespace std;

class Money {
	double money;
	int getIndex(int);
public:
	Money();
	int getDollars();
	int getCents();
	void setDollars(int);
	void setCents(int);
	double getAmount();
};

Money::Money()
{
	money = 0;
}
int Money::getDollars() { 
	return (int)money; 
}
int Money::getCents() {
	double cents = money;
	double r;

	do {
		cents *= 10;
		r = cents - (int)cents;
	} while (r!=0);

	return cents; 
}
void Money::setDollars(int d) { 
	money = money - (int)money + d; 
}
void Money::setCents(int cents) 
{ 
	double dollars = (int)money;
	int index = getIndex(cents);

	money = dollars + cents/pow(10,index);
}

double Money::getAmount() {
	return money;
}

int Money::getIndex(int cents)
{
	int index = 0,
		c = cents;

	do {
		c /= 10;
		index++;
	} while (c != 0);

	return index;
}

int main() {
	Money m;

	m.setDollars(12);
	m.setCents(234);

	cout << m.getAmount() << endl << endl;

	m.setDollars(122);
	m.setCents(453);

	cout << m.getAmount() << endl << endl;

	return 0;
}