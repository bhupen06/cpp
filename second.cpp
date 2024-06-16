//without perameter and single parameter program 
#include<iostream>
using namespace std;
void time()
{
   cout<<"without parameter"<<endl;
};
void time(int a)
{
   cout<<"single perameter"<<endl;
};
int main()
{
     time();
    time(2);
  return 0;
}