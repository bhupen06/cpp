//write c++ program that accept empid,total work hr,amout per hr,print id and salary
#include<iostream>
using namespace std;
int main()
{
    int empid;
    float total_hr,amo_hr,salary;
    cout<<"Enter employee ID : ";
    cin>>empid;
    cout<<"Enter Total work hours : ";
    cin>>total_hr;
    cout<<"Enter Per hours amount : ";
    cin>>amo_hr;
    salary=total_hr*amo_hr;
    cout<<"total salery : "<<salary;

}