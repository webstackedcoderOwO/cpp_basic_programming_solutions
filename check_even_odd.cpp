/* Check a following number is Even or Odd */
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number to Check for Even or Odd:"<<endl;
    cin>>number;
    if(number%2==0)
    {
        cout<<"Given Number is Even"<<endl;
    }
    else
    {
        cout<<"The Given number is odd"<<endl;
    }
return 0;
}


