#include <iostream>
#include <math.h>
using namespace std;

char codificat(char c, int k) {
    
    if (c >= 'a' and c <= 'z') {
        
        return 'A' + (c - 'a' + k) % 26; 
    }
    
    else if (c == '_') return ' '; 
    else return c;  
}

int main () {
    
    int a; 
    
    while (cin >> a) {
        
        char j; 
        cin >> j; 
        
        while (j != '.') {
            
        cout << codificat(j, a); 
        cin >> j; 
        
        }
        
        cout << endl; 
        
    }
        
}
    
             
        
        
        
    
