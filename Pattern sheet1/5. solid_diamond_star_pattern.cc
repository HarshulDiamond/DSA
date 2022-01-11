#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int space = n - 1;
 
   
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0;j < space; j++)
            cout << " ";
 
        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";
 
        cout << endl;
        space--;
    }
     space =0;
    for (int i = n; i > 0; i--)
    {
        
        for (int j = 0; j < space; j++)
            cout << " ";
 
        // Print i stars
        for (int j = 0;j < i;j++)
            cout << "* ";
 
        cout << endl;
        space++;
    }
    return 0;
}
    