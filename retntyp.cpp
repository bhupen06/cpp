//return type function
#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c,n1,n2;
    n1=a;
    n2=b;
    c=n1+n2;
    return c;
}
int main()
{
    int num1,num2,sum;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<"Enter 2st number : ";
    cin>>num2;

    cout<<"1st number : "<<num1<<endl;
    cout<<"2st number : "<<num2<<endl;

    sum=add(num1,num2);   
    cout<<"sum of two number : "<<sum;//<<add(num1,num2);


}