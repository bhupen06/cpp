//simple interest program 
#include<iostream>
using namespace std;
class SI
{
    float si,p,r,t;
public:
    void setdata()
    {
        cout<<"enter principle : ";
        cin>>p;
        cout<<"enter rate : ";
        cin>>r;
        cout<<"enter time : ";
        cin>>t;
    }
    void log()
    {
        si=(p*r*t)/100;
    }
    void dis()
    {
        cout<<"your simple interest is : "<<si;
    }
};
int main()
{
    SI obj;
    obj.setdata();
    obj.log();
    obj.dis();
}
