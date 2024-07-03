//any number of row and col and blank space   

#include<iostream>
using namespace std;
void ptn(int r,int c)
{
    int i,j,k;
   for(i=1;i<=r;i++)
   {
       if(i==1||i==r)
       {
          for(j=1;j<=c;j++)
        {
         cout<<"* ";  
        }
        cout<<endl;
       }
       else
       {
           for(k=1;k<=c;k++)
           {
               if(k==1||k==c)
               {
                   cout<<"* ";
               }
               else
               {
                   cout<<"  ";
               }
           }cout<<endl;
       }
   }
}
int main()
{
    int r,c;
    cout<<"enter row :";
    cin>>r;
    cout<<"enter col :";
    cin>>c;
    ptn(r,c);

}