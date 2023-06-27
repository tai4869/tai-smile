#include <iostream>
using namespace std;
void analyizeDigits(int num,int &outSum,int &outCountDigs);
int main() {
    
  int num;
  cout << "Please enter a positive number: ";
  cin >> num;
  int sum, count;
  analyizeDigits(num, sum, count);
  cout<< num <<" has "<<count<<" digits and their sum is "<<sum<<endl;
}
void analyizeDigits(int num,int &outSum,int &outCountDigs)
{
  outSum = 0;
  outCountDigs = 0;
  while (num > 0) 
  {
    int digit = num % 10;
    outSum += digit;
    num /= 10;
    outCountDigs++;
  }
}