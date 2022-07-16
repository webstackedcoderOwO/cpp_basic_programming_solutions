#include<iostream>
using namespace std;
int main()
{
    int i, n, f;
    cout<<"Enter a number whose factorial you want to find:"<<endl;
    cin>>n;
    f=n;          // 'n' value is stored in f
    for(i=1; i<n; i++)
    {
        f=f * i;
    }
    cout<<"The factorial of the following number is:"<<f<<endl;    //We write cout outside because we print this one time
    return 0;
}
