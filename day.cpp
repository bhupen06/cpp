//day print 
#include<iostream>
using namespace  std;
int main()
{
    int pr;
    cout<<"press button (1-7):";
    cin>>pr;
    switch(pr)
    {
        case 1:
        cout<<"Sunday";
        break;

        case 2:
        cout<<"Monday";
        break;

        case 3:
        cout<<"Tuesday";
        break;

        case 4:
        cout<<"Wednesday";
        break;

        case 5:
        cout<<"Thursday";
        break;

        case 6:
        cout<<"Friday";
        break;

        case 7:
        cout<<"Saturday";
        break;

        default:
        cout<<"please enter right choice";

        return 0;
    }
}
