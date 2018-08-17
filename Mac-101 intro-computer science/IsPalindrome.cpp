#include <iostream>
#include <string>
using namespace std;

bool isPalindrome (string& str);

int main(){
	  string mystr;
	  cout << "Enter a string ";
	  getline (cin, mystr);
	  if (isPalindrome(mystr))
		  cout << mystr << " is a palindrome \n";
	  else
		  cout << mystr << " is not a palindrome \n";
}

bool isPalindrome(string& str)
{
    if (str.empty())
        return false;

    int i = 0;                // first characters
    int j = str.length() - 1; // last character

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
