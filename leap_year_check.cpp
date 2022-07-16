#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a Year to Check if its a Leap Year or Not"<<endl;
    cin>>year;
    if(year%400 == 0)       //If year is divided by 400 then its leap year
    {
        cout<<"The given year is a Leap Year"<<endl;
    }
    else if(year%100 == 0 && year%400 != 0 && year%4 == 0)   // If year is divided by 100, 4 and not divided by 400 its not a leap year
    {
        cout<<"The given year is not a Leap Year"<<endl;
    }
    else if(year%100 != 0 && year%400 != 0  && year%4 == 0)   // If a year is not divided by 100 and 400 but divided by 4 it is a Leap Year
    {
        cout<<"The given year is a Leap Year"<<endl;
    }
    else
    {
        cout<<"The following year is not a Leap Year"<<endl;
    }
return 0;
}


