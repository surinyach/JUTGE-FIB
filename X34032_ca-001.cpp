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
typedef vector<bool> VB; 
typedef vector<vector<bool>> VVB; 
typedef pair<int,int> Pos; 

vector<Pos> cavalls = { {1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1} }; 

int n, m;
VVC mapa; 
Pos pi; 

void llegeix_mapa() {
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) cin >> mapa[i][j]; 
    }
}

bool pos_ok (int x, int y) {
    if (x > n-1 or x < 0 or y > m-1 or y < 0) return false; 
    return true; 
}

int bfs () {
    VVB visitats (n, VB (m, 0)); 
    vector<vector<int>> distancia (n, vector<int> (m)); 
    queue<Pos> Q; 

    Q.push(pi);
    distancia[pi.first][pi.second] = 0; 
    Pos final = {-1, -1}; 

    while (!Q.empty()) {
        Pos u = Q.front(); Q.pop(); 
        int x = u.first; int y = u.second; 
        if (pos_ok(x, y) and !visitats[x][y] and mapa[x][y] != 'X') {
            visitats[x][y] = 1;
            for (auto p : cavalls) {
                Pos np; 
                np.first = x + p.first; 
                np.second = y + p.second; 
                int nx = np.first; 
                int ny = np.second; 
                if (pos_ok(nx,ny)) {
                    distancia[nx][ny] = distancia[x][y] + 1; 
                    if (mapa[nx][ny] == 'p') {
                        final = {nx, ny}; 
                        queue<Pos> aux; 
                        Q = aux; 
                        break; 
                    } 
                    else Q.push(Pos(nx, ny)); 
                }
                
            } 
        }
    }

    if (final.first == -1 and final.second == -1) return -1; 
    else return distancia[final.first][final.second]; 
}

int main () {
    while (cin >> n >> m) {
        mapa = VVC (n, VC (m)); 
        llegeix_mapa(); 
        cin >> pi.first >> pi.second; 
        pi.first -= 1; 
        pi.second -= 1; 
        int caselles = bfs(); 
        if (caselles != -1) cout << caselles << endl; 
        else cout << "no" << endl; 
    }

}