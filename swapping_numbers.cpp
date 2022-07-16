#include<iostream>
using namespace std;
int main()
{
    //We have to assign 3 variables a, b and a empty variable c
    int a, b, c;
    cout<<"Enter the first Number:"<<endl;
    cin>>a;
    cout<<"Enter the Second Number:"<<endl;
    cin>>b;
    cout<<"The Stored Number is:"<<a<<" " "and" " "<<b<<endl;
    c=a;   //Value of 'a' stored in 'c'
    a=b;   //Value of 'b' stored in 'a'
    b=c;   //Value of 'c' stored in 'b'
    cout<<"The Numbers after Swapping is:"<<a<<" "<<b<<endl;
    return 0;

}


