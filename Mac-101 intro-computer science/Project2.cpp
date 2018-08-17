#include <iostream>
using namespace std;

int largest(int, int, int);

int main(){

	int number1, number2, number3;
	cout << "Enter three integers: " << endl;
	cin >> number1 >> number2 >> number3;

	cout << "The largest integer is: " << largest(number1, number2, number3) << endl;

}

int largest (int n1, int n2, int n3){

	int LargestSoFar = n1;

	if (n2 > LargestSoFar) LargestSoFar = n2;
	if (n3 > LargestSoFar) LargestSoFar = n3;

	return LargestSoFar;

}
