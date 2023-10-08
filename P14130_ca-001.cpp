#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main () {

    int n; 
    cin >> n; 
    
    int cont = 0;
    
    vector <int> v (n); 
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] == v[n - 1]) ++cont; 
    }
    cout << cont << endl; 
}
    
    
