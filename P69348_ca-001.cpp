#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
using namespace std;

void escriu (const vector<int>& A) {
    cout << "("; 
    for (int i = 0; i < A.size(); ++i) {
        if (i != A.size()-1) cout << A[i] << ","; 
        else cout << A[i] << ")" << endl; 
    }
}

void permutacions (vector<int>& A, vector<bool>& B, int p) {
    if (p == A.size()) escriu(A); 
    else {
        for (int i = 0; i < A.size(); ++i) {
            if (!B[i]) {
                A[p] = i + 1; 
                B[i] = 1; 
                permutacions(A, B, p+1); 
                B[i] = 0; 
            }
        }
    }
}

int main () {
    int n; cin >> n; 
    vector<int> A (n);
    vector<bool> B (n); 
    permutacions(A, B, 0); 
}