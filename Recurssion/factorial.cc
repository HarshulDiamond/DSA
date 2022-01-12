#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    if(n==0 || n==1)
       return 1;
    
    fact = n * factorial(n-1);
    return fact;
    
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int a = factorial(n);
     cout<<a;
    return 0;

}