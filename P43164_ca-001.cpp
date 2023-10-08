#include <iostream> 
#include <vector> 
#include <queue> 
using namespace std; 

typedef vector<char> VC; 
typedef vector<VC> VVC; 
typedef vector<bool> VB; 
typedef vector<VB> VVB; 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
typedef pair<int, int> Pos; 

int n, m; 
VVC mapa; 
Pos pi; 

vector<Pos> moves = { {1,0}, {-1,0}, {0,1}, {0,-1} }; 

void llegir_mapa() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mapa[i][j];
    }
}

bool pos_ok (int x, int y) {
    return x >= 0 and x < n and y >= 0 and y < m; 
}


int bfs () { 
    priority_queue<int> distancia_tresors; 

    VVB visitats (n, VB(m,0));
    visitats[pi.first][pi.second] = 1; 

    queue<Pos> Q;  
    Q.push(pi); 

    VVI distancia (n, VI(m, -1)); 
    distancia[pi.first][pi.second] = 0; 

    while (!Q.empty()) {
        Pos u = Q.front(); Q.pop(); 
        int x = u.first; int y = u.second;  
        for (auto i : moves) {
            Pos np; 
            np.first = x + i.first; 
            np.second = y + i.second; 
            int sx = np.first; //seguent x 
            int sy = np.second; //seguent y
            if (pos_ok(sx, sy) and !visitats[sx][sy] and mapa[sx][sy] != 'X') {
                visitats[sx][sy] = 1; 
                distancia[sx][sy] = distancia[x][y] + 1; 
                if(mapa[sx][sy] == 't') distancia_tresors.push(distancia[sx][sy]); 
                Q.push(np); 
            }
        }
    }

    if (distancia_tresors.size() == 0 or distancia_tresors.size() == 1) return -1; 
    else {
        distancia_tresors.pop();  
        return distancia_tresors.top(); 
    } 
}

int main () {
    cin >> n >> m; 
    mapa = VVC (n, VC (m)); 
    llegir_mapa();
    cin >> pi.first >> pi.second; 
    --pi.first; --pi.second;  
    int dist = bfs(); 
    if (dist != -1) cout << "segona distancia maxima: " << dist << endl; 
    else cout << "no es pot arribar a dos o mes tresors" << endl; 
}