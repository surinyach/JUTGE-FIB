#include <iostream> 
#include <math.h> 
using namespace std;

void info_sequencia(int& suma, int& ultim) {
    
    int num; 
    cin >> num; 
    
    ultim = 0; 
    suma = 0; 

    while (num != 0) {
        
        suma += num; 
        ultim = num; 
        cin >> num; 
    }
    
    if (num == 0 and ultim == 0) suma = -1; 
}
    
int main () {
    
    int suma = 0; 
    int ultim = 0; 
    
    int suma1 = 0; 
    int ultim1 = 0; 
    int cont = 1; 
    
    int n; 
    cin >> n; 
    
    while (n != 0) {
        
        suma1 += n; 
        ultim1 = n; 
        cin >> n; 
        
    }

    while (suma != -1) {
        
        info_sequencia(suma, ultim); 
        if (suma == suma1 and ultim == ultim1) ++cont; 
    
    }
    
    cout << cont << endl; 
    
}
    
        
        
        
        
        
        
        
     

    
             
     
                 
         
