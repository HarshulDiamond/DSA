#include<iostream>
using namespace std;      
int Fibonacci(int n)
{    
    if(n<=1)
       return n;
    return Fibonacci(n-1)+Fibonacci(n-2);


    
}    
int main(){    
    int n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Fibonacci Sum: ";    
      
    int a =Fibonacci(n); 
    cout<<a;   
     return 0;  
}  