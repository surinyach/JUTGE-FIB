#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
    
    if (any%4 == 0) {
        
        if (any%100 == 0 and any/100%4 != 0) return false; 
        
        else return true; 
        
    }
    
    else return false; 
    
}

int main () {
    
    int a = 0; 
    cin >> a; 
    
    if (es_any_de_traspas(a)) cout << "YES" << endl; 
    else cout << "NO" << endl; 
    
}
        
        
        
        
        
        
        
     

    
             
     
                 
         
