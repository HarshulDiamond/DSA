#include<iostream>
using namespace std;
bool issame(int arr1[],int arr2[])
{
    for(int i=0;i<256;i++)
    {
        if(arr1[i]!=arr2[i])
           return false;
    }
    return true;
}
int find_anagram(string txt,string ptr)
{
    int i,count_txt[265]={0},count_ptr[256]={0};
    for(int i=0;i<ptr.length();i++)
    {
        count_txt[txt[i]]++;

    }
    for(int i=0;i<ptr.length();i++)
    {
        count_ptr[ptr[i]]++;
        
    }
    for(int i= ptr.length();i<=txt.length();i++)
    {
        if(issame(count_txt,count_ptr))
             return 1;
        count_txt[txt[i]]++;
        count_txt[txt[i-ptr.length()]]--;

    }
    return -1;

}
int main()
{
    string str1,str2;
    cout<<"Enter first string ";
    cin>>str1;
    cout<<"Enter second string ";
    cin>>  str2;
    int p= find_anagram(str1,str2);
    if(p==1)
      cout<<"present";
    else
    cout<<"not present";
   
    return 0;

}