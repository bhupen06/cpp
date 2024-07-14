#include<iostream>
using namespace std;
void maths()
{
    int roll[5],i;
    string name[5],add[5];
    for(i=0;i<5;i++)
    {
        cout<<"Enter student name : ";
        cin>>name[i];
        cout<<"student roll no. : ";
        cin>>roll[i];
        cout<<"student address : ";
        cin>>add[i];
    }

    for(i=0;i<5;i++)
     {
        cout<<"Enter student name : "<<name[i]<<endl;
        cout<<"student roll no. : "<<roll[i]<<endl;
        cout<<"student address : "<<add[i]<<endl;
     }

}
int main()
{
  maths();
}