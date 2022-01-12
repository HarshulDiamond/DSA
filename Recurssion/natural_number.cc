#include<iostream>
using namespace std;
void natural(int n)
{
    static int i=1;
    if(i==n)
      return;
    else
    {
        cout<<i++<<" ";
        
        natural(n);
    }

}
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    natural(n);
    return 0;
}
