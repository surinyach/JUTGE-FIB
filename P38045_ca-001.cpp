#include <iostream>
#include <math.h>
using namespace std;

int quadrat (int c) {
    
    c = c*c; 
    return c; 
    
}

double arrel (double h) {
    
    h = sqrt(h); 
    return h; 
    
}

int main () {
    
    cout.setf(ios::fixed); 
    cout.precision(6); 
    
    int num = 0; 
    
    while (cin >> num) {
        
    cout << quadrat(num) << " " << arrel(num) << endl; 
    
    }
    
}
        
        


        
        
         
                    
            
            
        
    
        
        
            
            
            
            
        
        
        
        
        
        
        
        
     

    
             
     
                 
         
