//abslute value program cpp
#include<iostream>
using namespace std;
int abslute(int a)
{
    if(a<0)
    {
        a=a*(-1);
    }
   
    return a;
}
int main()
{
    int num,b;
    cout<<"enter number : ";
    cin>>num;
    b=abslute(num);
    cout<<"abslite value is"<<b;
   return 0; 
}