//sum of individual number three digit (123 = 1+2+3 = 6)
#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,sum;
    cout<<"Enter number : ";
    cin>>num;
    a=num/100;
    b=(num%100)/10;
    c=num%10;
    sum=a+b+c;
    cout<<"sum of individual number "<<num<<" = "<<sum<<endl;

    return 0;
} 