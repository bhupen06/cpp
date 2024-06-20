//nested if else  without logic && operater
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter thrid number : ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"greatest number : "<<a;
        }
        else
        {
            cout<<"greatest number : "<<c;
        }
    }
    else
    {
      if(b>c)
      {
        cout<<"greatest number : "<<b;
      }
      else
      {
        cout<<"greatest number : "<<c;
      }
    }
   return 0;
}