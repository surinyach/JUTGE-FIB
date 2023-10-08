#include <iostream>
#include <math.h>
using namespace std;

int sum_min_max (int x, int y, int z) {
    
    int max = 0; 
    int min = 0; 

    if (x >= y and x >= z) max = x; 
    else if (y >= x and y >= z) max = y; 
    else if (z >= x and z >= y) max = z; 
    
    if (x <= y and x <= z) min = x; 
    else if (y <= x and y <= z) min = y; 
    else if (z <= x and z <= y) min = z; 
    
    
    return max + min; 
    
}

int main () {
    
    int h = 0; 
    int n = 0; 
    int p = 0; 
    
    cin >> h >> n >> p; 
    
    cout << sum_min_max(h, n, p) << endl; 
    
}

        
    
        
        
            
            
            
            
        
        
        
        
        
        
        
        
     

    
             
     
                 
         
