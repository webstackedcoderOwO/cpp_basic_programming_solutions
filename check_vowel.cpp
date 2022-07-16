#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter and Alphabet to Check if its a Vowel or Not:"<<endl;
    cin>>c;
    if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
    {
        cout<<"The given Alphabet is a Vowel : )"<<endl;
    }
    else
    {
        cout<<"The given Alphabet is not a Vowel : ("<<endl;
    }
    return 0;
}






