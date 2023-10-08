#include <iostream> 
using namespace std; 

int main () {

    int num; 
    cin >> num; 
    
    int maximo = num + (num -1); 
    int espacios = maximo/2;     
    
    
   
    for (int i = 1; i <= num - 1; ++i) {
        
       
         
        for (int j = 1; j <= maximo; ++j) {
            if (j <= espacios) cout << " "; 
            else if (j <= maximo - espacios) cout << "*"; 
            
        }
        
        espacios = espacios - 1; 
        cout << endl;
        
     }
     
     for (int i = 1; i == 1; ++i) {
         for (int j = 1; j <= maximo; ++j) {
             cout << "*"; 
         }
     
     cout << endl; 
     
     }
     
     espacios = 1; 
    
     for (int i = 1; i <= num - 1; ++i) {
         
         
         for (int j = 1; j <= maximo; ++j) {
            if (j <= espacios) cout << " "; 
            else if (j <= maximo - espacios) cout << "*"; 
        }
        
    cout << endl;
    espacios = espacios + 1; 
    
    }
        
        
}
    
            
        
    
     

    
             
     
                 
         
