#include<iostream>
using namespace std;
int pattern( string str,string ptr)
{
    int n=str.length();
    int m= ptr.length();
    int j;
    for(int i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str[i+j]!=ptr[j])
              break;
        }
        if(j==m)
           return i;
    }
}



int main()
{
    string str,ptr;
    cout<<"Enter string ";
    cin>>str;
    cout<<"Enter Pattern ";
    cin>>ptr;
    int p=pattern(str,ptr);
    cout<<p;
    return 0;
    

}