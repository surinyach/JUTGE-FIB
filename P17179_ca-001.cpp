#include <iostream> 
using namespace std; 

int main () {
    
    cout.setf(ios::fixed); 
    cout.precision(4); 
    
    int n = 0; 
    cin >> n; 
    
    for (int i = 1; i <= n; ++i) {
        
        int sec = 0; 
        cin >> sec; 

        double max = 0;
        double min = 0; 
        double mitjana = 0; 
        bool primera = false; 
        
        for (int j = 1; j <= sec; ++j) {
    
            double num = 0; 
            cin >> num; 
            mitjana += num; 
            
            if (not primera) {
                max = num; 
                min = num; 
                primera = true; 
            }
            else if (num > max and primera) max = num; 
            else if (num < min and primera) min = num; 
            
           if (j == sec) {
               
              
               cout << min << " ";  
               cout << max << " "; 
               cout << mitjana/j << endl; 
           }
           
        }
        
    }
    
}
            
            
            
            
        
        
        
        
        
        
        
        
     

    
             
     
                 
         
