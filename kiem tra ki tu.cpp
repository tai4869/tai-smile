/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Please enter a character: ";
    cin>>ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase";
 
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase";
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is an Digit";
    else
        cout << ch << " is not an alphaNumeric character";


   return 0;
}

