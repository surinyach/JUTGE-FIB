#include <iostream> 
#include <vector> 
#include <cmath> 
#include <string> 
using namespace std; 
    
void convergeix(int n, int& k, int& lluny) {
    while (n != 1) { 
        if (n%2 == 0) n /= 2; 
        else n = n*3 +1; 
        ++k; 
        if (lluny < n) lluny = n; 
    }
}

int main () {
    
    int n, m; 
    cin >> n >> m; 
    
    int lluny = n; 
    
    for (int i = 1; i <= n; ++i) {
        int k = 0; 
        int anterior = lluny; 
        convergeix(i, k, lluny); 
        if (k >= m) cout << i << endl; 
        if (lluny < anterior) lluny = anterior; 
    }
    cout << "S'arriba a " << lluny << "." << endl; 
}
