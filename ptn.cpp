//function call by reference
#include<iostream>
using namespace std;
void fun(int *num)
{
    cout<<*num<<endl;
    *num=87;
    cout<<*num<<endl;
}
int main()
{
    int a;
    a=12;
    cout<<a<<endl;
    fun(&a);
    cout<<"bad me "<<a<<endl;

}