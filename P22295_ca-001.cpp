#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
#include <string> 
#include <list> 
#include <algorithm>
#include <set>
using namespace std;

typedef vector<vector<char>> Mapa;
typedef vector<vector<bool>> Visitado;

int n, m; 
Mapa map; 
Visitado vis; 
vector<char> solucio;
int x_inicial, y_inicial; 
int x_final, y_final;  

void llegir_mapa() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> map[i][j]; 
        }
    }
}

void escriu() {
    for (int i = 0; i < solucio.size(); ++i) cout << solucio[i]; 
    cout << endl; 
}

void cami (int x, int y) {
    if (x == x_final && y == y_final) {
        solucio.push_back(map[x][y]);
        escriu();
        solucio.pop_back(); 
    } 
    else {
        if(!vis[x][y]) {
            vis[x][y] = 1;
            solucio.push_back(map[x][y]); 
            if (x + 1 < n) cami(x + 1, y);
            if (x - 1 >= 0) cami(x - 1, y); 
            if (y + 1 < m) cami(x, y + 1); 
            if (y - 1 >= 0) cami(x, y - 1); 
            vis[x][y] = 0; 
            solucio.pop_back(); 
        }
    }
}


int main () {
    cin >> n >> m; 
    map = Mapa (n, vector<char> (m));
    vis = Visitado (n, vector<bool> (m, 0));
    llegir_mapa();
    cin >> x_inicial >> y_inicial; 
    cin >> x_final >> y_final; 
    cami(x_inicial, y_inicial);
}

