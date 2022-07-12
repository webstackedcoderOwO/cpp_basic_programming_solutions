#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a Number to Check Divisibility by 3:"<<endl;
    cin>>number;
    if(number%3==0)
    {
        cout<<"The given number is divisible by 3"<<endl;
    }
    else
    {
        cout<<"The given number is not divisible by 3"<<endl;
    }
return 0;
}


