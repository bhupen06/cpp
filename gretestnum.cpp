//gretest number 
#include<iostream>
using namespace std;
class gretest
{
    int n1,n2;
public:
    void setdata()
    {
        cout<<"enter 1st number : ";
        cin>>n1;
        cout<<"enter 2nd number : ";
        cin>>n2;
    }
    void dis()
    {
        if(n1!=n2)
        {
            if(n1>n2)
            {
                cout<<"gretest number is : "<<n1;
            }
            else{
                 cout<<"gretest number is : "<<n2;
            }
        }
        else
        {
             cout<<"number is equl ";
        }
    }
};
int main()
{
    gretest g;
    g.setdata();
    g.dis();
}
