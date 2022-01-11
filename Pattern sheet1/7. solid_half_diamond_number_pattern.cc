


#include <iostream>
  
using namespace std;
  
int main()
{
    int i, j,N=6;
  
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < i + 1; j++)
        {
            int count =5;
        
            cout << count -j;
        }
        cout << "\n";
    }
  
   
   int val;
    for (i = 1; i < N; i++) 
    {
        int count=6;
        for (j = i; j < N; j++)
        {
             
            
            count=count-1;
            cout<< count;;
        }
        cout << "\n";

        }
          
   return 0;     
}
    

  
