//wap to Compare give character is alphabet,digit,special symbol or not
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter char = ";
    cin>>ch;
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
     cout<<ch<<"  alphabet char";
    }
    else if(ch<='0' && ch>='9')
    {
     cout<<ch<<"  digit char";
    }
    else
    {
     cout<<ch<<"  special symbol char";
    }

    return 0;
}