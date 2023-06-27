/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int hour24,minute24;
    char temp;
    int hour12, minute12;
    string period;
    
    cout<<"Please enter a time in a 24-hour format:"<<endl;
    cin>>hour24>>temp>>minute24;
    
    minute12=minute24;
    
    if(hour24>=0&&hour24<=11){
        period="am";
        
        if (hour24==0){
            hour12=12;
        }
        else{
            hour12=hour24;
            
        }
        
    }
    else{
        period="pm";
        
        if(hour24==12){
        hour12=hour24;
       }
       else{
           hour12=hour24-12;
       }
    
    }
        
    
    cout<<hour24<<temp<<minute24<<"is"<<hour12<<temp<<minute12<<period<<endl;

    return 0;
}
