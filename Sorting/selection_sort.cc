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
    
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
          {
              if(arr[j]<arr[i])
                  swap(&arr[i],&arr[j]);
                  
          }
          
        
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 0;

}