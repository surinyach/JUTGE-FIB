#include <iostream> 
using namespace std; 

int main () {
    
    string a; 
    int cont = 0; 
    
    while (cin >> a) {
        if (a == "hola") ++cont; 
    }
    
    cout << cont << endl; 
    
}
