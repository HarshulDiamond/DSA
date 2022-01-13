#include<iostream>
using namespace std;
int main()
{
    int i,j,n=7;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==j)||((i+j) == n-1)||(j==0)||(j==n-1)||(i==0)||(i==n-1))
                 cout<<"*";
            else
                 cout<< " ";
        }
        cout<<endl;
    }
    return 0;
}