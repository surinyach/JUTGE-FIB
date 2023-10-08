#include <iostream> 
using namespace std; 

int main () {

cout.setf(ios::fixed); 
cout.precision (4); 

double a, b, k;


    while (cin >> a >> b >> k) {
        double c = a; 
        double resul = 0; 
        int cont = 1; 
        while (c <= b) {
            resul += 1/c; 
            c = a + cont*k; 
            ++cont; 
        }
    cout << resul << endl; 
    }
}
        
        
