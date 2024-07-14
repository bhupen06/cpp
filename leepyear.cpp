//leep year program
#include<iostream>
using namespace std;
class Year
{
    int year;
    public:
    void setdata()
    {
        cout<<"enter year : ";
        cin>>year;

    }
    void dis()
    {
        if(year%4==0 || year%400==0)
        {
            cout<<"leep year : "<<year;
        }
        else
        {
          cout<<"not leep year : "<<year;
        }
    }
};
int main()
{
    Year y;
    y.setdata();
    y.dis();
}
