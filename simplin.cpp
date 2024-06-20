//not complit
#include<iostream>
using namespace std;
class vehicle
{
    private :
  int oj;

  public:
  void setvalue()
  {
    cout<<"enter value 0 or 1 ";
    cin>>oj;
  }
  public:
  void check()
  {
   if(oj==1)
     {
        cout<<"engin start"<<endl;

     }
     else
     {
        cout<<"please start engin"<<endl;
        
     }
  }  
};
class bike : public vehicle
{
  
 public :
  void drive()
  {
   
    cout<<"start drive";
  }
};
int main()
{
    bike oj1;
    oj1.setvalue(); 
    oj1.check();
    oj1.drive();
}