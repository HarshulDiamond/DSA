#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    s1=s1+s1;
    if(s1.find(s2))
       cout<<"yes";
    else
       cout<<"no";
  
  return 0;
}