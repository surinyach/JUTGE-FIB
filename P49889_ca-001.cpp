#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
#include <string> 
using namespace std;

vector<char> c; 
vector<char> v;
vector<char> paraula; 
vector<bool> c1; 
vector<bool> v1; 

void escriu () {
    for (char s : paraula) cout << s; 
    cout << endl; 
}

void paraules (int p) {
    if (p == paraula.size()) escriu(); 
    else {
        if (p%2 == 0) {
            for (int i = 0; i < c.size(); ++i) {
                if (!c1[i]) {
                    paraula[p] = c[i]; 
                    c1[i] = true; 
                    paraules(p+1); 
                    c1[i] = false;
                }
            }
        }
        else {
            for (int i = 0; i < v.size(); ++i) {
                if (!v1[i]) {
                    paraula[p] = v[i]; 
                    v1[i] = true; 
                    paraules(p+1); 
                    v1[i] = false; 
                }
            }
        }
    }
}

int main () {
    int n; cin >> n;
    c = v = vector<char> (n); 
    c1 = v1 = vector<bool> (n); 
    paraula = vector<char> (2*n); 
    for (int i = 0; i < n; ++i) cin >> c[i];
    for (int i = 0; i < n; ++i) cin >> v[i]; 
    paraules(0);  
}