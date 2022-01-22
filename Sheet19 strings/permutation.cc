#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    while(next_permutation(str.begin(),str.end()))
    {
        cout<<str <<" ";
    }
    return 0;
}
