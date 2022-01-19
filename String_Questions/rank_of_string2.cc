#include<iostream>

using namespace std;
int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}
int lexi(string str)
{
    int rank=1;
    int n= str.length();
    int mul =fact(n);
    int count[256]={0};
    for(int i=0;i<n;i++)
    {
        count[str[i]]++;
    }
    for(int i=1;i<256;i++)
    {
        count[i]+=count[i-1];

    }
    for(int i=0;i<n;i++)

    {
        mul/= (n-i);
        rank+= count[str[i]-1]*mul;
        for(int j= str[i];j<256;j++)
        {
            count[j]--;
        }
    }
    return rank;

}
int main()
{
    string str;
    cin>>str;
    int i=lexi(str);
    cout<<i;
    return 0;

}