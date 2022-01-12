#include<iostream>
using namespace std;
int CheckPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return CheckPrime(i+1,num);
    }
}
int main()
{
    int n,i;
    cout<<"enter value of n";
    cin>>n;
    for(i=2;i<=n;i++)
      {if(CheckPrime(2,i)==0)
        cout<<i<<" ";
      }
      return 0;
}