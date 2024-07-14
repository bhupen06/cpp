//lcf and hcf .....
#include<iostream>
using namespace std;
int lcf(int a,int b)
{
    int m,n1,n2,temp;
    n1=a;
    n2=b;
    if(n1>n2)
    {
        m=n1;
    }
    else
    {
        m=n2;
    }
    temp=m;
    while(1)
    {
        if(m%n1==0 && m%n2==0)
        {
            m;
            break;
        }
        m=m+temp;
    }
  return m;
}
int hcf(int a,int b)
{
    int m,n1,n2,temp;
    n1=a;
    n2=b;
    if(n1<n2)
    {
        m=n1;
    } 
    else
    {
      m=n2;
    }
    temp=m;
    while(1)
    {
        if(n1%m==0 && n2%m==0)
        {
            m;
            break;
        }
        m--;
    }
    return m;
}

int main()
{
    int num1,num2,b;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter seconde number : ";
    cin>>num2;
    cout<<"lcf is : "<<lcf(num1,num2)<<endl;
    cout<<"lcf is : "<<hcf(num1,num2);
}
