#include<iostream>
#include<vector>
using namespace std;
void parent(vector<string>&ans,string sample,int open,int close)

{
    if(open==0&&close==0)
    {
        ans.push_back(sample);
        return;
    }
    if(open)
      parent(ans,sample+'(',open-1,close+1);
    if(close)
       parent(ans,sample+')',open,close-1);
    

}
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    string sample;
    parent(ans,sample,n,0);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}