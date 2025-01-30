#include<iostream>
using namespace std;

int main()
{
    int num, sum=0, lastdigit, firstdigit;
    cout<<"Enter value of num: ";
    cin>>num;

    lastdigit = num % 10;

    while(num >= 10)
    {
        num = num / 10;
        firstdigit = num;
    }

    sum = firstdigit + lastdigit;

    cout<<"The sum of the first and last is: "<<sum;

    return 0;
}