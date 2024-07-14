#include<iostream>
using namespace std;
void fibo(int n)
{
    int a=-1,b=1,c,i;
    for(i=1;i<=n;i++)
    {
     c=a+b;
     cout<<" "<<c;
     a=b;
     b=c;
    }
}
int main()
{
    int num;
    cout<<"n time number print fibo serice :";
    cin>>num;
    fibo(num);
}
