#include<iostream>
using namespace std;
int main()
{
    int numb, i;
    cout<<"Enter a Number to Check Wheather its Prime or Not:"<<endl;
    cin>>numb;
    for(i=2; i<numb; i++)
    {
        if(numb%i==0)
        {
            cout<<"The following number is Not Prime"<<endl;
            break;    // After the condition further loop is not done
        }
    }
        if(i==numb)
        {
            cout<<"The Number is Prime"<<endl;
        }
}





