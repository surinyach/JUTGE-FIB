#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std;

typedef vector < vector<int> > Matriu; 

void min_max (const Matriu& mat, int& minim, int& maxim) {
    
    for (int i = 0; i < mat.size(); ++i) {
        for (int j = 0; j < mat[0].size(); ++j) {
            if (mat [i][j] > maxim) maxim = mat[i][j]; 
            if (mat [i][j] < minim) minim = mat [i][j]; 
        }
    }
    
}


int main () {
    
    int n, m; 
    int maxdiff = 0; 
    int cont = 1; 
    int primdiff = 1; 
    
    while (cin >> n >> m) {
        
        int h = maxdiff; 
        
        Matriu mat (n, vector <int> (m)); 
        
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[0].size(); ++j) cin >> mat[i][j]; 
        }
        
        int minim = mat[0][0]; 
        int maxim = mat[0][0]; 
        
        min_max(mat, minim, maxim); 
        
        if (maxdiff < (maxim - (minim))) maxdiff = maxim - (minim); 
        if (h != maxdiff) primdiff = cont; 
        
        ++cont; 
        
    }
    
    cout << "la diferencia maxima es " << maxdiff << endl; 
    cout << "la primera matriu amb aquesta diferencia es la " << primdiff << endl; 
}
        
            
            
            
            
