//use class and write a program to factorial in c++
#include<iostream>
using namespace std;
class Fact
{
    int num,i,fac=1;
public :
    void setdata()
    {
        cout<<"enter number : ";
        cin>>num;
    }
    void log()
    {
        for(i=1;i<=num;i++)
        {
            fac=fac*i;
        }
    }

    void dis()
    {
         cout<<"your fact is : "<<fac;

    }

};
int main()
{
  Fact f;
  f.setdata();
  f.log();
  f.dis();
return 0;
}
