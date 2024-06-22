//function lower case to  uper case program 
#include<iostream>
using namespace std;
string uper(string a)
{
    int i;
    for(i=0;i<a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
          a[i]=a[i]-32;
        }
    }
    return a;
}
int main()
{
    cout<<uper("bhupen");
    return 0;
}