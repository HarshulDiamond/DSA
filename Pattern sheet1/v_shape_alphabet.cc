#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i, j;
    for (i = n - 1; i >= 0; i--) {
 
    
        for (j = n - 1; j > i; j--) {
            cout << " ";
        }
 
        
        cout << char(i + 65);
 
        for (j = 1; j < (i * 2); j++)
            cout << " ";
 
        if (i >= 1)
            cout << char(i + 65);
        cout << "\n";
    }
return 0;
}