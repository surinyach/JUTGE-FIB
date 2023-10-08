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

typedef vector<int> VI;
typedef vector<bool> VB;  

int f, c;
VI torres; 
VB ocupades; 

void escriu() {
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (torres[i] == j) cout << "R";  
            else cout << "."; 
        }
        cout << endl; 
    }
    cout << endl; 
}

void backtracking(int p) {
    if (p == f) escriu(); 
    else {
        for (int i = 0; i < c; ++i) {
            if(!ocupades[i]) {
                ocupades[i] = 1; 
                torres[p] = i; 
                backtracking(p + 1);
                ocupades[i] = 0;  
            }
        }
    }
}

int main () {
    cin >> f >> c;
    torres = VI (f); 
    ocupades = VB (c); 
    backtracking(0); 
}


