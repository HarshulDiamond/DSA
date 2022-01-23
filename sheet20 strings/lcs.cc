#include<iostream>
#include<string>
#include<vector>
using namespace std;
int maxlength(string s)
{
    vector<int>count(256,-1);
    int start = -1,maxlen=0;
    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]]>start)
           start=count[s[i]];
        
        count[s[i]]=i;
        maxlen = max(maxlen,i-start);
        
    }
    return maxlen;

}
int main()
{
    string s;
    getline(cin,s);
    cout<<maxlength(s);
    return 0;
}