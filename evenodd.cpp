//use class and write a program even and odd in c++
#include<iostream>
using namespace std;
class EvenOdd
{
    int num;
public:
    void setdata()
    {
        cout<<"enter number : ";
        cin>>num;
    }

    void dis()
    {
        if(num%2==0)
        {
            cout<<"even number : "<<num;
        }
        else
        {
           cout<<"odd number : "<<num;
        }
    }
};
int main()
{
    EvenOdd EO;
    EO.setdata();
    EO.dis();
}
