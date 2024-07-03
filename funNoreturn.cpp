//function lower case to  uper case program 
#include<iostream>
using namespace std;
void uper(string a)
{
    int i;
    for(i=0;i<a[i];i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
          a[i]=a[i]-32;
        }
    }
    cout<<"change uper case : "<<a;
}
int main()
{
    string str;
    cout<<"string :";
    getline(cin,str);
    uper(str);
    return 0;
}