#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int n,x;
    
    cout<<"enter size of array";
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);        
    }
    
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
        
          
        
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 0;

}