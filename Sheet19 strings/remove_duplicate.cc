#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100],b[100];
    cout<<"Enter the string:";
    cin>>a;

    strcpy(b,a);
    int len1=strlen(a);
    int len2=strlen(b);


    for(int i=0;i<len1-1;i++)
    {
        for(int j=i+1;j<len2-1;j++)
        {
            if(a[i]==b[j])
            {
                b[j]=b[j+1];
            }
            len2--;
        }
    }


    cout<<b;
}