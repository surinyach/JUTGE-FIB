#include <iostream>
#include <vector> 
#include <limits> 
#include <queue> 
using namespace std; 

typedef vector<char> Fila; 
typedef vector<Fila> Mapa; 
typedef pair<int, int> Posicio;

vector<pair<int,int>> moves = {{1,0},{-1,0},{0,1},{0,-1}}; 

void llegir_mapa(Mapa& mapa) {
    for (int i = 0; i < mapa.size(); ++i) {
        for (int j = 0; j < mapa[0].size(); ++j) {
            cin >> mapa[i][j]; 
        }
    }
}

bool p_correcte (int n, int m, Posicio p) {
    return p.first >= 0 and p.first < n and p.second >= 0 and p.second < m; 
}

int bfs (const Mapa& mapa, Posicio inicial) {
    int n = mapa.size(); 
    int m = mapa[0].size(); 
    vector<vector<bool>> visitat (n, vector<bool> (m, false)); 
    vector<vector<Posicio>> anterior (n, vector<Posicio> (m)); 
    vector<vector<int>> distancia (n, vector<int> (m, 0)); 

    queue<Posicio> q; 
    visitat[inicial.first][inicial.second] = 1; 
    q.push(inicial); 

    Posicio tresor = Posicio(-1,-1); 
    while (!q.empty()) {
        Posicio aux = q.front(); q.pop(); 
        for (auto p: moves) {
            Posicio np;
            np.first = aux.first + p.first;  
            np.second = aux.second + p.second; 
            if (p_correcte(n, m, np) and !visitat[np.first][np.second] and mapa[np.first][np.second] != 'X') {
                visitat[np.first][np.second] = 1; 
                if (mapa[np.first][np.second] == 't') tresor = np; 
                anterior[np.first][np.second] = aux; 
                distancia[np.first][np.second] = distancia[aux.first][aux.second] + 1; 
                q.push(np); 
            }
        }
    }

    if (tresor != Posicio(-1,-1)) return distancia[tresor.first][tresor.second];
    return -1; 
}

int main () {
    int n, m; 
    cin >> n >> m; 
    Mapa mapa (n, Fila (m)); 
    llegir_mapa(mapa);
    Posicio pi; 
    cin >> pi.first >> pi.second;
    pi.first -= 1; pi.second -= 1;  
    int distancia = bfs(mapa, pi);  
    if (distancia != -1) cout << "distancia maxima: " << distancia << endl; 
    else cout << "no es pot arribar a cap tresor" << endl;
}