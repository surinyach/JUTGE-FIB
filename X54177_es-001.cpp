#include <iostream> 
using namespace std; 

int main () {
    int n, x; 
    cin >> n >> x; 
    for (int i = 1; i <= n; ++i) {
        int aux; 
        cin >> aux; 
        int suma = 0;
        while (aux != x) {
            suma += aux; 
            cin >> aux; 
        }
        string s; 
        getline(cin, s); 
        cout << "La suma de la secuencia " << i << " es " << suma << endl; 
    }
}
