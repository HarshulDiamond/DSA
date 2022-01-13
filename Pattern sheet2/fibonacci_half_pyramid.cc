#include<iostream>
using namespace std;
int main()
{

    int i,j,n=5;
     int n1=0,n2=1,n3=n1+n2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            cout<<n3<<" ";
            n3=n1+n2;
            n1=n2;
            n2=n3;

        
        }
        cout<<endl;
        
    }
    return 0;

}