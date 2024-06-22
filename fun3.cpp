//no return with argument function program
#include<iostream>
using namespace std;
void search(int a)
{
    switch(a)
    {
        case 1:
        cout<<"sunday"<<endl;
        break;

        case 2:
        cout<<"monday"<<endl;
        break;

        case 3:
        cout<<"tuesday"<<endl;
        break;

        case 4:
        cout<<"wednesday"<<endl;
        break;

        case 5:
        cout<<"thursday"<<endl;
        break;

        case 6:
        cout<<"friday"<<endl;
        break;

        case 7:
        cout<<"saturday"<<endl;
        break;
    }
}
int main()
{
    int n1;
    cout<<"enter your choice (between 1-7) and print day"<<endl;
    cout<<"enter 1st choice day : ";
    cin>>n1;
    search(n1);
    return 0;

}