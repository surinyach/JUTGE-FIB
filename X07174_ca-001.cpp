#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
#include <string> 
#include <list> 
#include <set>
#include <numeric>
#include <map> 
using namespace std;

int n, m;
vector<int> prohibits;
vector<int> solucio;   

void llegir_prohibits () {
    for (int i = 0; i < m; ++i) cin >> prohibits[i]; 
}

void escriu () {
    for (int i : solucio) cout << i; 
    cout << endl; 
}

void backtracking (int p, int prefix) {
    if (p == n) escriu(); 
    else {
        int aux = prefix; 
        if (p != 0) aux *= 10; 
        int i = 0; 
        if (p == 0) i = 1;  
        for (i; i < 10; ++i) {
            bool possible = 1; 
            for (auto j : prohibits) {if ((aux + i)%j == 0) possible = 0;}
            if (possible) {
                solucio[p] = i; 
                backtracking(p + 1, aux + i);  
            }
        }
    }
}

int main () {
    while (cin >> n >> m) {
        prohibits = vector<int> (m);
        solucio = vector<int> (n);  
        llegir_prohibits();
        backtracking(0, 0);
        cout << "----------" << endl;   
    }
}