#include<iostream>
using namespace std;
void pattern(int n)
{
    static int i=1,j=2;
    
    if(i==n)
       return;
    
    cout<<j <<"  +  ";
    j*=2;
    i++;
    pattern(n);

}
int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    cout<<"1  + ";
    pattern(n);
}