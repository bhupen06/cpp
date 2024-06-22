//work marina,bluewhale and mammal animal
#include<iostream>
using namespace std;
class Mammals
{
  public:
  void dis()
  {
    cout<<"i am Mammal animal"<<endl;
  }
};
class MarinaAnimal
{
    public:
    void dis1()
    {
      cout<<"i am Marina Animal"<<endl;
    }
};
class BlueWhale : public Mammals,public MarinaAnimal
{
    public:
    void dis2()
    {
      cout<<"i belogn to both the categories Mammals as wall as"<<endl;
    }
};
int main()
{
  cout<<endl;
  cout<<"mammal animal work"<<endl;
  Mammals maml;
  maml.dis();

  cout<<endl;
  cout<<"blue whale work"<<endl;
  BlueWhale blu;
  blu.dis2();
  blu.dis();
  blu.dis1();

  cout<<endl;
  cout<<"Marina animal work"<<endl;
  MarinaAnimal mrn;
  mrn.dis1();

  return 0;

}