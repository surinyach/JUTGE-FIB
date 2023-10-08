#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    
    double producte = 0; 
    for (int i = 0; i < u.size(); ++i) {
        producte += u[i]*v[i]; 
    }
    return producte; 

}

int main () {
    
    int a; 
    cin >> a; 
    
    vector<double> u (a);
    vector<double> v (a);
    
    for (int i = 0; i < a; ++i) {
        int aux; 
        cin >> aux; 
        u[i] = aux; 
    }
    
    for (int i = 0; i < a; ++i) {
        int aux; 
        cin >> aux; 
        v[i] = aux; 
    }
    
    cout << producte_escalar(u,v) << endl; 
    
}
    
