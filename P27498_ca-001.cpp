#include <iostream> 
#include <vector>
#include <string>
using namespace std; 

typedef vector<int> Fila; 
typedef vector<Fila> Matriu; 

void canvia (int& a, int& b) {
    int aux = a; 
    a = b; 
    b = aux; 
}

void transposa(Matriu& m) {
    
    int n = m.size(); 
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            canvia (m[i][j], m[j][i]); 
        }
    }
}

int main () {
    
    int num;
    cin >> num; 
    
    Matriu m(num, Fila(num)); 
    
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            cin >> m[i][j]; 
        }
    }
    
    transposa(m); 
    
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            cout << m[i][j] << " "; 
        }
    }
    
    cout << endl;
    
}
        
        
