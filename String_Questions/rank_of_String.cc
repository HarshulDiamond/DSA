#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lexi(string str)
{
    string s1= str;


   sort(str.begin(),str.end());
   int i=1;
   do
   {
       if(str==s1)
           break;
        i++;
   } while(next_permutation(str.begin(),str.end()));

   return i;

}
int main()
{
    string str;
    cin>>str;
    int i=lexi(str);
    cout<<i;

}