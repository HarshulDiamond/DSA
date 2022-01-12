#include<iostream>
using namespace std;
void pattern(int n)
{
    static int i=1,j=0;
    if(i==n)
       return ;
    if( j != 0)
      cout<<j<<"  +  ";
    j=i*i;
    i++;
    pattern(n);
        

}
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    pattern(n);
    return 0;

}
