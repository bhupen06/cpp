//use insert value , provide user value, use getline
#include<iostream>
using namespace std;
int main()
{
  /*string s="bhupendra prajapat";   //as it is print string
    cout<<"name : "<<s<<endl;     
    */

  /*string s1;
    cout<<"enter string : ";
    cin>>s1;                  //its take single word
    cout<<"name : "<<s1<<endl;  
    */

    string s2;
    cout<<"enter string : ";
    getline(cin,s2);           // its take sentance in input
    cout<<"name : "<<s2<<endl;
    
    return 0;
}