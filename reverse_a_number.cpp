#include<iostream>
using namespace std;
int main()
{
    int n, r, sum;
    cout<<"Enter a Number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    cout<<"Reverse of the Number is:"<<sum<<endl;
}


