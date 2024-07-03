#include<iostream>
using namespace std;
class fruit
{
  public:
    int Man;
    int App;

  public:
    void setdata()
    {
        cout<<"enter Mango : ";
        cin>>Man;
        cout<<"enter Apple : ";
        cin>>App;
    }

 public:
    void Tot()
    {
        int total=Man+App;
        cout<<"total fruits : "<<total<<endl;
    }
};
class mango : public fruit
{
public:
void man()
        {
          cout<<"Tatal Mango :"<<Man<<endl;
        }
};
class apple : public mango
{
  public:
    void app()
        {
          cout<<"Tatal Apple : "<<App<<endl;
        }
};

int main()
{
    apple obj;
    obj.setdata();
    obj.Tot();
    obj.man();
    obj.app();
    return 0;
}
