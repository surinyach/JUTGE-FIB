#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 



void girar (string& s) {
    
    int n = s.length(); 
    for (int i = 0; i < n/2; ++i) {
        int aux = s[i]; 
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = aux;
    }
}

int main () {
    
    int n; 
    cin >> n; 
    vector<string> s(n);  
    
    for (int i = 0; i < n; ++i) {
        string aux; 
        cin >> aux; 
        s[i] = aux; 
    }
    
    for (int i = 0; i < n; ++i) {
        girar(s[n - 1 - i]); 
        cout << s[n - 1 - i] << endl; 
    }
     
}
        
