#include <iostream> 
using namespace std; 

int main () {
    
    int sec = 0; 
   
    while (cin >> sec) {
        
        int max = 0; 
        bool primera = false; 
        
        for (int i = 1; i <= sec; ++i) {
        
            int num = 0; 
            cin >> num; 
            
            if (not primera) {
                max = num; 
                primera = true; 
            }
            
            else {
                
                if (num > max) max = num; 
            }
            
            if (i == sec) cout << max << endl; 
            
        }
        
    }
}
        
        
        
            
            
            
            
        
        
        
        
        
        
        
        
     

    
             
     
                 
         
