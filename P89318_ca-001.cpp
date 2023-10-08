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

int n;
vector<char> solution; 
vector<char> lletres; 
vector<bool> usats;  

void escriu () {
    for (char c : solution) cout << c; 
    cout << endl; 
}


void backtracking (int p) {
    if (n == p) escriu();
    else { 
        for (int i = 0; i < lletres.size(); ++i) {
            if ((p == 0 || solution[p-1] +  1 != lletres[i]) && !usats[i]) {
                solution[p] = lletres[i]; 
                usats[i] = 1; 
                backtracking(p + 1);
                usats[i] = 0; 
            }
        }
    }
}

void lletres_disponibles () {
    char lletra = 'a'; 
    for (int i = 0; i < n; ++i) {
        lletres[i] = lletra;
        ++lletra; 
    } 
}

int main () {
    cin >> n;
    solution = vector<char> (n);
    lletres = vector<char> (n);
    usats = vector<bool> (n);  
    lletres_disponibles();  
    backtracking(0); 
}