#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <cmath> 
using namespace std; 

string sortida(int p, vector<int>& v) {
    int tam = v.size(); 
    vector <bool> aux (tam, false); 
    while (not aux[p]) {
        aux[p] = true; 
        if (v[p] > 0) {
            if (p+v[p] >= tam) return "dreta"; 
            p += v[p]; 
        } else if (v[p] < 0) {
            if (p+v[p] < 0) return "esquerra"; 
            p += v[p]; 
        }
    }
    return "mai"; 
}

int main () {
}
