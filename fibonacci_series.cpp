#include<iostream>
using namespace std;
int main()
{
    int n1=0, n2=1, n3, i, n;
    cout<<"Enter a Number until which you want to Iterate"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<"The fibonacci Series:"<<n3<<endl;
    }
    return 0;
}





