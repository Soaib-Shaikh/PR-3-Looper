#include<iostream>
using namespace std;

int main()
{
   int number,digticount=0;
   cout<<"Enter number: ";
   cin>>number;

    while(number > 0)
    {
        number /= 10;
        digticount++;
    }
 
   cout<<"Total number of digits: "<<digticount;

    return 0;
}