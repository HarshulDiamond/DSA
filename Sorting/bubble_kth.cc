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
    int k;
    cout<<"Enter k";
    cin>>k;
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
              swap(&arr[j],&arr[j+1]);
        }
        if( i == k)
        {for(int p=0;p<n;p++)
          {
        cout<<arr[p]<<" ";
        
        }
        cout<<endl;
        goto f1;
        }
        
    }
    f1 : return 0;

}