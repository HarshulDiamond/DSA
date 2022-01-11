#include <iostream>
using namespace std;
int main()
{
  int n=5,i,j,k,p=1;
  for(i=1;i<=5;i++)
       {
       for(j=5-1;j>=i;j--)
       {
            cout<<" ";
       }
       for(k=p;k>=1;k--)
       {
           cout<<k;
       }
       p+=2;
       cout<<"\n";
       }
       return 0;
}
