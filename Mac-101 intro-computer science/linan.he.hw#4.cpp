#include <iostream>
#include <cmath>
using namespace std;

void get_all_divisors(int n);
void get_lowest_divisors(int i);

int main() {
	int n = 0;
    cout << "Enter a number and press ENTER: ";
    cin >> n;
    get_all_divisors(n);
    cout << endl;
    return 0;
}// end main

// Get divisors function
// This function prints all the divisors of n,
// by finding the lowest divisor, i, and then
// rerunning itself on n/i, the remaining quotient.

void get_all_divisors(int n) {
	int i;
	double sqrt_of_n = sqrt(n);
	for (i = 2; i <= sqrt_of_n; i++) {
		if (n % i == 0) {   // If i divides n evenly,
			cout << i << ",";
			get_lowest_divisors(n);
			return;
		}
	}
	cout << n;
}
void get_lowest_divisors(int i) {
	int n = sqrt(i);
	int b = 2;
	if(b <= n) {
		i /= b;
		b++;
		return get_all_divisors(i);
	}
}
