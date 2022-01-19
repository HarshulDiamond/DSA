#include<bits/stdc++.h>
using namespace std;
int repeatin(string str)
{
    int count[256]={0};
    int n = str.length();
    int temp = INT_MAX;
    for(int i=0;i<256;i++)
    {
        count[i]=-1;
    }
    for(int i =0;i<n;i++)
    {
        if(count[str[i]]==-1)
        {
            count[str[i]]=i;
           
        }
        else
           temp = min(temp,count[str[i]]);
    
    }
    return (temp == INT_MAX)? -1 : temp;
}
int main()
{
    string str;
    cin>>str;
    int i = repeatin(str);
    cout<<i;
    return 0;

 }