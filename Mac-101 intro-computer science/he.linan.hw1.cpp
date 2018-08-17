#include <iostream>
using namespace std;

int main() {
	int n, final;
	cout << "let f(x)=4x^3+x^2+3x-5\n";
	cout << "enter a integer to find for x:\n";
	cin >> n;
	final = 4 * n*n*n + n*n + 3 * n - 5;
	cout << "f(" << n << ")=" << final << endl;
	system("pause");//only window able to read this line
	return 0;
}