/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <string>
#include <sstream>


using namespace std;
int main() {
  
 double arg1,arg2;
 char op;
 
  
  cout << "Please enter an expression of the form arg1 op arg2: ";
  cin >> arg2>>op>>arg2;
  switch (op){
      case '+':
      result=arg1+arg2;
      cout<<result;
      break;
      case '-':
      result=arg1-arg2;
      cout<<result;
      break;
      case '*':
      result=arg1*arg2;
      cout<<result;
      break;
      case '/':
      result=arg1/arg2;
      cout<<result;
      break;
      cout<<"illegal operator"<<endl;
      
  }
  
}


     


  
 
