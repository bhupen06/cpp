//return type with argument
#include<iostream>
using namespace std;
int fun(int a)        //return type with argument
{
    return (a+10);
}
float fun(double b)
{
  return (b+5.6);
}
int main()
{
    cout<<fun(5)<<endl;

    cout<<fun(59.56)<<endl;

    /*int b;
    b=fun(5);
    cout<<b;*/
} 