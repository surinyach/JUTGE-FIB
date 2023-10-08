#include <iostream>
using namespace std; 

int main () {
    int a, b, c, f, resul, h; 
    cin >> a; // 163 
    resul = 1; 
    f = 2; 
    h = 1; 
    
    while(f <= 16) {
        c = f*h; 
        h = c;  
        b = a/(h);
        if (b > 0) {
            ++resul;
        } else {
        cout << "Base " << f << ": " << resul << " cifras." << endl;  
        ++f; 
        h = 1; 
        resul = 1; 
        }
        
    }
}
    

    

