//return type function
#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
string fname(string name)
{
    string nm;
    nm=name;
    return nm;
}
int main()
{
    int num1,num2,sum;
    string name,sname;
     cout<<" name : ";
    cin>>name;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<"Enter 2st number : ";
    cin>>num2;
   

    cout<<"1st number : "<<num1<<endl;
    cout<<"2st number : "<<num2<<endl;

    sum=add(num1,num2);   
    cout<<"sum of two number : "<<sum<<endl;//<<add(num1,num2);

    sname=fname(name);
    cout<<"student name : "<<sname<<endl;

    return 0;
}