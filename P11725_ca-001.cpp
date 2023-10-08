#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 

bool hi_es(int x, const vector<int>& v) {
    
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == x) return true; 
    }
    return false; 
}

int main () {
    
    int a; 
    cin >> a; 
    
    int n; 
    cin >> n; 
    vector<int> v (n); 
    
    for (int i = 0; i < n; ++i) {
        int aux; 
        cin >> aux; 
        v[i] = aux; 
    }
    
    if (hi_es(a,v)) cout << "SI" << endl; 
    else cout << "NO" << endl; 
}
