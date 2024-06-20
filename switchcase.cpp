//switch case sport the character
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter state short name (m,r,u) : ";
    cin>>ch;
    switch(ch)
    {
        case 'm':
        cout<<"madhya pradesh"<<endl;
        break;
        case 'r':
        cout<<"rajsthan"<<endl;
        break;
        case 'u':
        cout<<"uttar pradesh"<<endl;
        break;
        default :
        cout<<"enter right state short name";

        return 0;
    }
}