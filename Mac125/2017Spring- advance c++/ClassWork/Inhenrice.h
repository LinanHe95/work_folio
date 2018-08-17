#include<iostream>
#include<string>
using namespace std;
class Pet {
	string name;
	int age;
	double weight;
public:
	Pet();
	Pet(string, int, double);
	string getname();
	int getage();
	double getweight();
	void setname(string);
	void setage(int);
	void setweight(double);
	void getLifespan();
};
Pet::Pet() { name = "no name"; age = 0; weight = 0.0; }
Pet::Pet(string newname, int newage, double newweight) { newname = name; newage = age; newweight = weight; }
string Pet::getname() { return name; }
int Pet::getage() { return age; }
double Pet::getweight() { return weight; }
void Pet::setname(string a) { name = a; }
void Pet::setage(int b) { age = b; }
void Pet::setweight(double c) { weight = c; }
void Pet::getLifespan() { cout<< "unkknown lifespan"; }

class Dog :Pet {
	string breed;
public:
	Dog();
	Dog(string, int, double, string);
	string getBreed();
	void setBreed(string);
	void getLifespan(Dog);
};
Dog::Dog() { breed = "no breed"; }
Dog::Dog(string newname, int newage, double newweight, string newBreed) {
	setname(newname); setage(newage); setweight(newweight); setBreed(newBreed);
}
string Dog::getBreed() { return breed; }
void Dog::setBreed(string d) { breed = d; }
void Dog::getLifespan(Dog a) {
	if (a.getweight < 100)
		cout << "Approxmately 7 eyars";
	else if (a.getweight <= 100)
		cout << "Approxmately 13 eyars";
}
int main() {
	Pet rock("wat", 9, 59.8);
	rock.getLifespan();

	Dog dogs("badDog", 9, 9.9, "nobreed");
	dogs.getLifespan();

}