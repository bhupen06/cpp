//ternary operator greatest number 
#include<iostream>
using namespace std;
int main()
{
     int a,b,c,ans;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter thrid number : ";
    cin>>c;
    ans=(a>b)?(a>c?a:c):(b>c?b:c);
    cout<<"greatest number : "<<ans;

   return 0;
}