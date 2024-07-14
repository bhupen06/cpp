//prime number 
#include<iostream>
using namespace std;
class prime
{
    int num,i,flag;
public:
    void setdata()
    {
        cout<<"enter number : ";
        cin>>num;
    }
    void log()
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
               flag=1;
               break;
            }
        }
    }
    void dis()
    {
        if(flag==1)
        {
            cout<<"not prime number : "<<num;
        }
        else
        {
        cout<<"prime number : "<<num;
        }
    }    
};
int main()
{
    prime p;
    p.setdata();
    p.log();
    p.dis();
    return 0;
}