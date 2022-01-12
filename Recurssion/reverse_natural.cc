#include<iostream>
using namespace std;
void natural(int n)
{
   if(n==0)
     return;
    cout<< " " << n-1;
    natural(n-1);
}
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    natural(n);
    return 0;
}