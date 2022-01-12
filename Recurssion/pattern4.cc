#include<iostream>
using namespace std;
void pattern(int n)
{
    static int i=1;
    static float j=1;
    if(i==n)
       return;
    cout<<"1"<<"/"<<j<<"  +  ";
    j=j*3;
    i++;
    pattern(n);

}
int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    pattern(n);
}