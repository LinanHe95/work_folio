#include<iostream>
#include<string>
using namespace std;

class FLIGHTDETAILS {
	int FlightNumber;
	string Destination;
	float Distance;
	float Fuel;
	//fuel needed for amount of disntance
	void CALFUEL( float );
public:
	//mutator
	void setFlightNumber(int);
	void setDestination(string);
	void setDistance(float);
	void setFuel(float);
	
	//accessor
	int getFlightNumber();
	string getDestination();
	float getDistance();
	float getFuel();
	//let user enter info and display
	void FEEDINFO();
	void SHOWINFO();
};
 
void FLIGHTDETAILS::setFlightNumber(int newFlightNumber) { FlightNumber = newFlightNumber; }
void FLIGHTDETAILS::setDestination(string newDistination) { Destination = newDistination; }
void FLIGHTDETAILS::setDistance(float newDistance) { Distance = newDistance; }
void FLIGHTDETAILS::setFuel(float newFuel) { Fuel = newFuel; }

int FLIGHTDETAILS::getFlightNumber() { return FlightNumber; }
string FLIGHTDETAILS::getDestination() { return Destination; }
float FLIGHTDETAILS::getDistance() { return Distance; }
float FLIGHTDETAILS::getFuel() { return Fuel; }

void FLIGHTDETAILS::CALFUEL(float Distance) {
	if (Distance <= 1000)
		Fuel = 500;
	else if (Distance <= 2000)
		Fuel = 1100;
	else
		Fuel = 2200;
	cout << Fuel;
}

void FLIGHTDETAILS::FEEDINFO() {
	int newFlightNumber;
	string newDestination;
	float newDistance;
	
	cout << "Enter the Flight Number: " << endl;
	cin >> newFlightNumber;
	setFlightNumber(newFlightNumber);
	cout << "Enter the Destination place: " << endl;
	cin >> newDestination;
	setDestination(newDestination);
	cout << "Enter the Distance: " << endl;
	cin >> newDistance;
	setDistance(newDistance);
	


	
}
void FLIGHTDETAILS::SHOWINFO() {
	cout << "\nFlight Number: \n"<<FlightNumber << endl;
	cout << "Destination: \n" << Destination << endl;
	cout << "Distance: \n" << Distance << endl;
	cout << "Amount of Fuel: \n";
	CALFUEL(Distance);
}

int main() {
	FLIGHTDETAILS flight;
	flight.FEEDINFO();
	flight.SHOWINFO();
	system("pause");
	return 0;
}