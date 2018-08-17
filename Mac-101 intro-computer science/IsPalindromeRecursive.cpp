#include <iostream>
#include <string>
using namespace std;

bool isPalindrome (string str);

int main(){
	  string mystr;
	  cout << "Enter a string ";
	  getline (cin, mystr);
	  if (isPalindrome(mystr))
		  cout << mystr << " is a palindrome \n";
	  else
		  cout << mystr << " is not a palindrome \n";
}

bool isPalindrome(string str){

	int length = str.length();
	string newString="";

	if(length <= 1)
		return true;
	else if(str.at(0) == str.at(length -1)) {
		newString = str.substr(1, (length - 2));
		return isPalindrome(newString);
	}
	else
		return false;
}
