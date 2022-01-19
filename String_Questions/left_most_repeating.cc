#include<iostream>
using namespace std;
int repeatin(string str)
{
    int count[256]={0};
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        count[str[i]]++;
    }
    for(int i =0;i<n;i++)
    {
        if(count[str[i]]>1)
        {
            cout<<str[i] <<"\n";
        
            return i+1;
        }
    
    }
}
int main()
{
    string str;
    cin>>str;
    int i = repeatin(str);
    cout<<i;
    return 0;

 }