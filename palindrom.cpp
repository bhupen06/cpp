#include<iostream>
using namespace std;
int main()
{
    int num,rem,b=10,sum=0,temp;
    cout<<"enter number : ";
    cin>>num;
   temp=num;
    while (num>0)           
    {
        rem=num%10;
        sum=(sum*b)+rem;
        num=num/10;
    }
    
    if(temp==sum)
    {
      cout<<"palindrom number : "<<sum;
    }
    else{
        cout<<"not palindrom number : "<<sum;
    }
  return 0;
}
