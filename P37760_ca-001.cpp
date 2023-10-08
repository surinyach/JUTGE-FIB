#include <iostream>
#include <math.h>
using namespace std;

double sinus (double c) {

    c = c*M_PI/180; 
    c = sin(c); 
    return c; 
    
}

double cosinus (double h) {

    h = h*M_PI/180; 
    h = cos(h);
    return h; 
    
}

int main () {
    
    cout.setf(ios::fixed); 
    cout.precision(6); 
    
    double num = 0; 
    
    while (cin >> num) {
        
        cout << sinus(num) << " " << cosinus(num) << endl; 
    }
}
    
   

        


        
        
         
                    
            
            
        
    
        
        
            
            
            
            
        
        
        
        
        
        
        
        
     

    
             
     
                 
         
