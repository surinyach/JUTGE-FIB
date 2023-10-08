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

typedef vector<char> VC; 
typedef vector<VC> VVC; 

vector<char> lletres = {'L', 'O'}; 
int max_lol = 0;
int n, m;
VVC solucio; 


bool pos_ok(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m; 
}

bool check_horitzontal (int x, int y) {
    int x1 = x-1; 
    if (!pos_ok(x1,y)) return false; 
    else {
        if (solucio[x1][y] != 'O') return false; 
    }
    int x2 = x-2; 
    if (!pos_ok(x2,y)) return false; 
    else {
        if (solucio[x2][y] != 'L') return false; 
    }
    return true; 
}

bool check_vertical(int x, int y) {
    int y1 = y-1; 
    if (!pos_ok(x,y1)) return false; 
    else {
        if (solucio[x][y1] != 'O') return false; 
    }
    int y2 = y-2; 
    if (!pos_ok(x,y2)) return false; 
    else {
        if (solucio[x][y2] != 'L') return false; 
    }
    return true; 
}

bool check_diagonal_dre (int x, int y) {
    int x1 = x-1; 
    int y1 = y+1; 
    if (!pos_ok(x1,y1)) return false;
    else {
        if (solucio[x1][y1] != 'O') return false; 
    }
    int x2 = x-2; 
    int y2 = y+2; 
    if (!pos_ok(x2,y2)) return false;
    else {
        if (solucio[x2][y2] != 'L') return false; 
    }
    return true; 
}

bool check_diagonal_esq (int x, int y) {
    int x1 = x-1; int y1 = y-1; 
    if (!pos_ok(x1,y1)) return false;
    else {if (solucio[x1][y1] != 'O') return false;}
    int x2 = x-2; int y2 = y-2; 
    if (!pos_ok(x2,y2)) return false;
    else {if (solucio[x2][y2] != 'L') return false;}
    return true; 
}

void backtracking (int x, int y, int valor_actual) {
    if (x == n && y == 0) {
        if (valor_actual > max_lol) max_lol = valor_actual; 
    }
    else  {
        int x1; int y1; 
        if (y == m-1) {
            x1 = x+1; 
            y1 = 0; 
        }
        else {
            x1 = x; 
            y1 = y+1; 
        }
        for (int i = 0; i < lletres.size(); ++i) {
            solucio[x][y] = lletres[i]; 
            int aux = valor_actual;
            if (lletres[i] == 'L') { 
                if (y >= 2) {if (check_vertical(x,y)) ++aux;}
                if (x >= 2) {if (check_horitzontal(x,y)) ++aux;} 
                if (check_diagonal_dre(x,y)) ++aux;
                if (check_diagonal_esq(x,y)) ++aux;
            
            }
            backtracking(x1, y1, aux);  
        }
    }
}

int main () {
    while (cin >> n >> m) {
        max_lol = 0; 
        solucio = VVC (n, VC (m, 0)); 
        backtracking(0,0,0);
        cout << max_lol << endl; 
    }
} 

