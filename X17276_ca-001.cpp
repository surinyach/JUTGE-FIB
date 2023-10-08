#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std;

typedef vector<int> Colm; 
typedef vector<Colm> Matrix; 

bool es_creixent (const Matrix& mat, int fil, int col, int infil, int incol) {
    
    while (fil + infil < mat.size() and fil + infil >= 0 and col + incol < mat[0].size() and col + incol >= 0) {
        if (mat[fil][col] >= mat[fil + infil][col + incol]) return false; 
        fil = fil + infil; 
        col = col + incol; 
    }

return true; 

}
            
int main () {
    
    int n, m; 
    
    while (cin >> n >> m) {
    
    Matrix mat (n, Colm(m)); 
    
    for (int i = 0; i < mat.size(); ++i) {
        for (int j = 0; j < mat[0].size(); ++j) cin >> mat[i][j]; 
    }
    
    int f, c; 
    cin >> f >> c; 
    if (es_creixent(mat, f, c, 1, 1) and es_creixent(mat, f, c, 1, -1) and es_creixent(mat, f, c, -1, 1) and es_creixent(mat, f, c, -1, -1)) cout << "si" << endl; 
    else cout << "no" << endl;
    
    }
}
    
    
    
            
            
            
            
