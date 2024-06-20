//to find greatest number in three digit number
#include<iostream>
using namespace std;
int main()
{
    int a ,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter thrid number : ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"greatest number is : "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"greatest number is : "<<b;
    }
    else
    {
        cout<<"greatest number is : "<<c;
    }

  return 0;
}