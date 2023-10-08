#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
using namespace std;

void escriu (const vector<string>& A) {
    cout << "("; 
    for (int i = 0; i < A.size(); ++i) {
        if (i != A.size()-1) cout << A[i] << ","; 
        else cout << A[i] << ")" << endl; 
    }
}

void permutacions (vector<string>& A, const vector<string>& W, vector<bool>& B, int p) {
    if (p == A.size()) escriu(A); 
    else {
        for (int i = 0; i < A.size(); ++i) {
            if (!B[i]) {
                B[i] = true; 
                A[p] = W[i]; 
                permutacions(A, W, B, p+1); 
                B[i] = false; 
            }
        }
    }
    
}

int main () {
    int n; cin >> n; 
    vector<string> A (n);
    vector<string> W (n);
    for (int i = 0; i < W.size(); ++i) cin >> W[i]; 
    vector<bool> B (n); 
    permutacions(A, W, B, 0); 
}