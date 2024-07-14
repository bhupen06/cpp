#include<iostream>
using namespace std;
int ans(int rem,int cont)
{
    int ans=1,i;
    for(i=1;i<=cont;i++)
    {
        ans=ans*rem;
    }
    return ans;
}

int main()
{
    int num,temp,cont=0,sum=0,rem;
    cout<<"enter number : ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        cont++;
        num=num/10;
    }
    num=temp;
    while(num>0)
    {
        rem=num%10;
        sum=sum+ans(rem,cont);
        num=num/10;
    }

    if(sum==temp)
    {
        cout<<"armestrong number : "<<temp;
    }
    else
    {
        cout<<"not armestrong number : "<<temp;
    }
}
