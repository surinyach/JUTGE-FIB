#include <iostream> 
#include <vector> 
#include <queue> 
using namespace std; 

typedef vector<vector<char>> Mapa; 
typedef vector<char> Casilla; 

vector <pair<int,int>> adjacents = {make_pair(1,0), make_pair(-1,0), make_pair(0,1), make_pair(0,-1)}; 

int mindist(const Mapa& map, int fi, int ci) {
    Mapa visitat (map.size(), Casilla(map[0].size())); 
    vector <vector<int>> distancia (map.size(), vector<int> (map[0].size()));
    pair <int, int> destino = make_pair(-1, -1); 
    queue<pair<int,int>> to_visit; 

    distancia[fi][ci] = 0;  
    to_visit.push(make_pair(fi, ci));
    visitat[fi][ci] = true; 

    while (!to_visit.empty()) {
        pair<int,int> aux = to_visit.front(); 
        to_visit.pop(); 
        for (auto nc:adjacents) {
            pair<int, int> np = make_pair(aux.first + nc.first, aux.second + nc.second);
            if (np.first >= 0 and np.second >= 0 and np.first < map.size() and np.second < map[0].size() and !visitat[np.first][np.second]){
                visitat[np.first][np.second] = 1; 
                distancia[np.first][np.second] = distancia[aux.first][aux.second] + 1; 
                if (map[np.first][np.second] == 't') {destino = np; queue<pair<int,int>> empty; to_visit = empty; break;}
                if (map[np.first][np.second] == '.') to_visit.push(np);
            }
        }
    }
    
    if (destino != make_pair(-1, -1)) return distancia[destino.first][destino.second]; 
    else return -1; 
}

int main () {
    int f, c; 
    cin >> f >> c; 
    Mapa map (f, Casilla(c)); 
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> map[i][j]; 
        }
    }
    int fi, ci;   
    cin  >> fi >> ci;    
    int distancia_minima = mindist(map, fi - 1, ci - 1); 
    if (distancia_minima > 0) cout << "distancia minima: " << distancia_minima << endl;
    else cout << "no es pot arribar a cap tresor" << endl; 
}