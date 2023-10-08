#include <iostream>
#include <math.h>
using namespace std;

int max4 (int a, int b, int c, int d) {
    
    int max = 0; 
    
    if (a >= b and a >= c and a >= d) max = a; 
    else if (b >= a and b >= c and b >= d) max = b;
    else if (c >= b and c >= a and c >= d) max = c;
    else if (d >= a and d >= b and d >= c) max = d; 
    
    return max; 
    
}

int main () {
    
    int x, y, z, p; 
    cin >> x >> y >> z >> p; 
    
    cout << max4(x, y, z, p) << endl; 

}
    
            
            
        
        
        
        
        
        
        
        
     

    
             
     
                 
         
