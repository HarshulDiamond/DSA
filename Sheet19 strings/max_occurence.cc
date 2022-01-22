#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    string str;
    cin>>str;
    int count[256]={0};
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    int max=0;
    string result;
    for(int i=0;i<str.length();i++)
    {
         
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
        
        
    }
    cout<<result;
    return 0;


}