#include <iostream>
using namespace std;

int main()
{
   int n1, n2, n3;
   cout << "Enter three integers: " << endl;
   cin >> n1;
   cin >> n2;
   cin >> n3;

   int largestSoFar=n1;

   if(n2 > largestSoFar)
	   largestSoFar = n2;

   if(n3 > largestSoFar)
   	   largestSoFar = n3;

   cout << "The largest is: " << largestSoFar << endl;
   return 0;
}
