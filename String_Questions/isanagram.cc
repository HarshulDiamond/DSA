#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

bool isanagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
         return false;


    int i=0,count[256]={0};
    for(i=0;i<str1.length();i++)
    {
        count[str1[i]]++;
    }
    for(i=0;i<str2.length();i++)
    {
        count[str2[i]]--;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]!=0)
            return false;
    }
    return true;


}
int main()
{
    string str1,str2;
    cout<<"Enter First String";
    cin>>str1;
    cout<<"Enter Second String";
    cin>>str2;
    if(isanagram(str1,str2))
       cout<<"Yes Anagram";
    else
        cout<<" Not Anagram";
    
    return 0;
}