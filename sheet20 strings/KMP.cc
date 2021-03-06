#include<iostream>
#include<string>
using namespace std;
void computelps(string txt,int m, int * lps)

{
    int len = 0;
    lps[0]=0;
    int i=1;
    while(i<m)
    {
        if(txt[i]==txt[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len = lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}
void kmp(string txt,string pat)
{
    int n= txt.length();
    int m= pat.length();
    int lps[m];
    computelps(txt,m,lps);
    int i=0,j=0;
    while(i<n)
    {
        if(pat[j]==txt[i])
        {
            j++;i++;
        }
        if(j==m)
        {
            cout<<"Pattern found at index"<<i-j;
            j=lps[j-1];

        }
        else if(i<n && pat[j]!=txt[i])
        {
            if(j!=0)
                j=lps[j-1];
            else
               i=i+1;
        }
    }

}
int main()
{
    string txt,pat;
    getline(cin,txt);
    getline(cin,pat);
    kmp(txt,pat);
    return 0;
}