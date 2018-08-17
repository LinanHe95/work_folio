#include <iostream>
#include <cmath>

using namespace std;

class Money {
	int dollars;
	int cents;
	int getIndex();
public:
	int getDollars();
	int getCents();
	void setDollars(int);
	void setCents(int);
	double getAmount();
};

int Money::getDollars() { return dollars; }
int Money::getCents() { return cents; }

void Money::setDollars(int d) { dollars = d; }
void Money::setCents(int c) { cents = c; }

double Money::getAmount() {
	int index;
	index = getIndex();

	return dollars+(cents/pow(10,index));
}

int Money::getIndex()
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