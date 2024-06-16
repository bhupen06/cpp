//program using cin and cout
#include<iostream>
using namespace std;
int main()
{
    int a;
    char c;
    float f;
    cout<<"integer value = ";
    cin>>a;
    cout<<"character value = ";
    cin>>c;
    cout<<"float value = ";
    cin>>f;
    cout<<"integer value = "<<a<<endl;
    cout<<"charactor value = "<<c<<endl;
    cout<<"float value = "<<f<<endl;
    
    //sizeof() oparator
    cout<<"size of int = "<<sizeof(a)<<endl;
    cout<<"size of charator = "<<sizeof(c)<<endl;
    cout<<"size of float = "<<sizeof(f)<<endl;

    return 0;
}