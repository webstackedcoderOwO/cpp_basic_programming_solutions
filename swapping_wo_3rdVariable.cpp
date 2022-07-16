#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the First Number:"<<endl;
    cin>>a;
    cout<<"Enter the Second Number:"<<endl;
    cin>>b;
    a = a + b;    // Value of a+b is stored in a
    b = a - b;    //Value of a-b is stored in b
    a = a - b;    //Value of a-b stored in a
    cout<<"The Numbers after Swapping is:"<<a<<" " "and" " "<<b<<endl;
    return 0;
}



