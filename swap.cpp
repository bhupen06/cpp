//function uses swap value 
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int *temp;  //int temp;
    temp=a;     // temp=*a;
    a=b;        //*a=*b;
    b=temp;     //*b=temp;

}

int main()
{
    int num1,num2;
    cout<<"enter 1st number : ";
    cin>>num1;
    cout<<"enter 2nd number : ";
    cin>>num2;
    
    cout<<"before swapping"<<endl;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    swap(&num1,&num2);  //swap(num1,num2) //call by reference
    cout<<"after swapping"<<endl;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

  
  return 0;
}