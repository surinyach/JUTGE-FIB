#include <iostream> 
#include <vector> 
using namespace std;

void escriu(vector<int> C) {
    int n = C.size(); 
    for (int i = 0; i < n-1; ++i) cout << C[i] << " ";
    if (n > 0) cout << C[n-1] << endl; 
}

void binari(int i, vector<int> C) {
    if (i == C.size()) escriu(C); 
    else {
        C[i] = 0; binari(i+1, C);  
        C[i] = 1; binari(i+1, C);  
    }
}

int main () {
    int n; 
    cin >> n; 
    vector<int> C(n); 
    binari(0, C); 
}