#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <cmath> 
using namespace std;

int producte_de_digits (int num) {
    
    int r = num%10; 
    
    num = num/10; 
    
    while (num > 0) {
        r *= num%10;
        num /= 10; 
    }
    
    return r;
}
    
int main () {
    int n; 
    while (cin >> n) {
        cout << "El producte dels digits de " << n << " es " << producte_de_digits(n) << "." << endl; 
        n = producte_de_digits(n); 
        while (n > 9) {
        cout << "El producte dels digits de " << n << " es " << producte_de_digits(n) << "." << endl; 
        n = producte_de_digits(n); 
        }
        cout << "----------" << endl; 
    }
}
        
    
        
        
    
