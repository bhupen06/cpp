#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        cout<<"enter value :";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
return 0;
}