#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <cmath> 
using namespace std; 

void insereix (vector<double>& v) {
    int tam = v.size(); 
    for (int i = 1; i < tam; ++i) {
        double x = v[i]; 
        int j = i; 
        while (j > 0 and x < v[j -1]) {
            v[j]= v[j -1]; 
            --j; 
        }
        v[j] = x; 
    }
}

int main () {
}
    
