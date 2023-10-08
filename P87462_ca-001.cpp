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

typedef vector<vector<char>> Mapa;
typedef vector<bool> VB; 
typedef vector<VB> VVB;  
typedef pair<int, int> Posicio;

Posicio pi; 
int n, m; 
Mapa mapa; 
VVB vis; 

vector<Posicio> danger = { {1,0}, {-1,0}, {0,1}, {0,-1}, {1,1}, {-1,-1}, {1,-1}, {-1,1} }; 
vector<Posicio> moves = { {1,0}, {-1,0}, {0,1}, {0,-1} }; 

void llegir_mapa () {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mapa[i][j];
            if (mapa[i][j] == 'P') pi = (Posicio(i, j)); 
        } 
    }
}

bool pos_ok (Posicio p) {
    int x = p.first; 
    int y = p.second; 
    if (x > n - 1 or x < 0 or y > m - 1 or y < 0) return false;
    return true;  
}

bool fantasma (Posicio p) {
    int x = p.first; 
    int y = p.second; 
    for (auto i : danger) {
        Posicio np;
        np.first = x + i.first; 
        np.second = y + i.second;  
        if (pos_ok(np)) {
            if (mapa[np.first][np.second] == 'F') return true; 
        }    
    }
    return false; 
}


void dfs (Posicio p, bool& posible) {
    int x = p.first; 
    int y = p.second;
    if (pos_ok(p) && !vis[x][y] && mapa[x][y] != 'X' && !fantasma(p) && !posible) {
        vis[x][y] = 1;
        if (mapa[x][y] == 'B') posible = 1;
        for (auto i : moves) {
            Posicio np; 
            np.first = x + i.first; 
            np.second = y + i.second; 
            dfs(np, posible); 
        }
    }
}   

int main () {
    while (cin >> n >> m) {
        mapa = Mapa (n, vector<char> (m));
        llegir_mapa(); 
        vis = VVB (n, VB (m));
        bool posible = 0;  
        dfs(pi, posible);
        if (posible) cout << "si" << endl; 
        else cout << "no" << endl;  
    }
}