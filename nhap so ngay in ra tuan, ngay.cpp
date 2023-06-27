/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

const int DAYS_OF_Week = 7;

int main()
{
    
    int daysTraveled;
    int numOfWeek, numOfDays;
    
    cout<<"nhap so ngay di du lich cua ban:  "<<endl;
    cin>>daysTraveled;
    
    numOfWeek=daysTraveled  / DAYS_OF_Week;
    numOfDays=daysTraveled  % DAYS_OF_Week;
    
    cout<<daysTraveled<<"ngay"<<numOfWeek<<"tuan"<<numOfDays<<" ngay";
    
    
    return 0;
}
