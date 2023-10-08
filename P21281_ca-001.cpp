#include <iostream>
#include <math.h>
using namespace std;

void factor(int n, int& f, int& q) {
    
   int i = 2, x = q = 0; 
   
   while (i*i <= n) {
    
       x = 0; 
       
       while (n%i == 0) {
           
           ++x; 
           n /= i; 
        
           if (x > q) f = i, q = x; 
       }
       
       ++i; 
       
   }
   
   if (q == 0) f = n, q = 1; 
   
}

int main  () {
    
    int a, f, q; 
    cin >> a; 
    
    factor(a, f, q); 
    
    cout << f << " " << q << endl; 
    
}
