//Kelvin = Celsius + 273.15
//Celsius = (5.0 / 9) * (Fahrenheit - 32)
#include <iostream>
using namespace std;

class Temperature
{
public:
	void setTempKelvin(double);
	void setTempFahrenheit(double);
	void setTempCelsius(double);
	double getTempKelvin();
	double getTempFahrenheit();
	double getTempCelsius();
	void print();
private:
	const double C = 273.15;
	double kelvin; // Internally store temp in kelvin
};

void Temperature::setTempKelvin(double temp) {
	kelvin = temp;
}
void Temperature::setTempFahrenheit(double temp) {
	double celsius;
	celsius = (5.0 / 9) * (temp - 32);
	kelvin = celsius + C;
}
void Temperature::setTempCelsius(double temp) {
	kelvin = temp + C;
}
double Temperature::getTempKelvin() {
	return kelvin;
}
double Temperature::getTempFahrenheit() {
	double celsius;
	celsius = kelvin - C;
	return celsius * 9 / 5 + 32;
}

double Temperature::getTempCelsius() {
	return kelvin - C;
}

void Temperature::print() {
	cout << "kelvin: " << getTempKelvin() << endl;
	cout << "celsius: " << getTempCelsius() << endl;
	cout << "fahrenheit: " << getTempFahrenheit() << endl;
}

int main()
{
	Temperature temp;

	temp.setTempKelvin(293.15);

	temp.print();

	temp.setTempCelsius(20);

	temp.print();

	temp.setTempFahrenheit(68);

	temp.print();

	return 0;
}
