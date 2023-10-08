#include <iostream> 
#include <vector>
using namespace std;

typedef vector<int> Fila; 
typedef vector<Fila> Matriu;  

void es_arbre(const Matriu& g, vector<bool>& visitat, bool& seguir, int origen, int i, int& trees, int principi) {
    for (int j = 0; j < g[i].size() && seguir; ++j) {
        if(!visitat[g[i][j]] && g[i][j] != origen) {
            visitat[g[i][j]] = true;
            es_arbre(g, visitat, seguir, i, g[i][j], trees, principi);  
        }
        else if (visitat[g[i][j]] && g[i][j] != origen) { //Hi ha cicle
            seguir = 0;  
            return; 
        }
    }
    if (seguir && i == principi) ++trees; 
    else return;
}

int conta_arbres(const Matriu& g) {
    int trees = 0; 
    bool seguir = true; 
    vector <bool> visitat (g.size(), false); 
    for (int i = 0; i < g.size() && seguir; ++i) {
        if (!visitat[i]) {
            visitat[i] = 1; 
            es_arbre(g,visitat, seguir, i, i, trees, i); 
        }
    }
    if (seguir) return trees; 
    else return 0; 
}


void llegir_graf(Matriu& g, int m) {
    for (int i = 0; i < m; ++i) {
        int x, y; 
        cin >> x >> y; 
        g[x].push_back(y);
        g[y].push_back(x);  
    }
}

int main () {
    int v, m; 
    while (cin >> v >> m) {
        Matriu g (v); 
        llegir_graf(g, m); 
        int arbres = conta_arbres(g); 
        if (arbres == 0) cout << "no" << endl;
        else cout << arbres << endl; 
    }
}