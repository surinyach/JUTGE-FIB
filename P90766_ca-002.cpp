#include <iostream> 
#include <vector> 
using namespace std; 

typedef vector<vector <char> > Mapa;
typedef vector<vector <bool> > Visitado; 

void busqueda_tresor_aux(const Mapa& map, Visitado& visit, int& tresors, int n, int m) { 
    //cout << n << " " << m << endl; 
    if (n < map.size() and m < map[0].size() and m >= 0 and n >= 0 and map[n][m] != 'X' and visit[n][m] == 0) {
        if (map[n][m] == 't')  tresors += 1; 
        visit[n][m] = 1;
        busqueda_tresor_aux(map, visit, tresors, n+1, m); 
        busqueda_tresor_aux(map, visit, tresors,  n-1, m); 
        busqueda_tresor_aux(map, visit, tresors, n, m+1);
        busqueda_tresor_aux(map, visit, tresors,  n, m-1); 
    }
}

int busqueda_tresor(const Mapa& map) {
    int x_inicial, y_inicial; 
    cin >> x_inicial >> y_inicial; 
    Visitado visit (map.size(), vector<bool>(map[0].size(), 0)); 
    int tresors = 0; 
    busqueda_tresor_aux(map, visit, tresors, x_inicial-1, y_inicial-1); 
    return tresors; 

}

int main () {
    int n, m; 
    cin >> n; 
    cin >> m; 

    Mapa map (n, vector<char> (m)); 
    
    for (int i = 0; i < map.size(); ++i) {
        for (int j = 0; j < map[0].size(); ++j) {
            char valor_casella; 
            cin >> valor_casella; 
            map[i][j] = valor_casella; 
        }
    }

    cout << busqueda_tresor(map) << endl; 
}
    