#include <iostream> 
#include <math.h> 
using namespace std;

bool es_any_de_traspas(int any) {
    
    if (any%4 == 0) {
        
        if (any%100 == 0 and any/100%4 != 0) return false; 
        
        else return true; 
        
    }
    
    else return false; 
    
}

bool es_data_valida (int d, int m, int a) {
    
    if (es_any_de_traspas(a)) {
        
        if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and (d >= 1 and d <= 31)) return true; 
        else if ((m == 4 or m == 6 or m == 9 or m == 11) and (d >= 1 and d <= 30)) return true; 
        else if ((m == 2) and (d >= 1 and d <= 29)) return true; 
        else return false; 
        
    } else {
        
        if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and (d >= 1 and d <= 31)) return true; 
        else if ((m == 4 or m == 6 or m == 9 or m == 11) and (d >= 1 and d <= 30)) return true; 
        else if ((m == 2) and (d >= 1 and d <= 28)) return true; 
        else return false; 
        
    }
    
}

int main () {
    
    int x, y, z; 
    cin >> x >> y >> z; 
    
    if (es_data_valida(x, y, z)) cout << "SI" << endl; 
    else cout << "NO" << endl; 
    
}
        


        
        
     

    
             
     
                 
         
