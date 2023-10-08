#include <iostream> 
#include <vector> 
#include <queue> 
#include <limits>
using namespace std;

typedef pair<double, int> ArcP; 
typedef vector< vector<ArcP> > GrafP; 

void llegir_graf (GrafP& graf, int m) {
    for (int i = 0; i < m; ++i) {
            int v; 
            cin >> v; 
            ArcP aux; 
            cin >> aux.second >> aux.first; 
            graf[v].push_back(aux); 
    }
}

double dijkstra (const GrafP& graf, int primer, int ultim) {
    int n = graf.size(); 
    vector <double> dist (n,numeric_limits<double>::infinity()); dist[primer] = 0; 
    vector <int> previ (n, -1);  
    vector <bool> visitat (n, false); 
    priority_queue<ArcP, vector<ArcP>, greater<ArcP>> Q;
    
    Q.push(ArcP(0, primer)); 

    while (not Q.empty()) {
        int u = Q.top().second; Q.pop(); 
        if (not visitat[u]) {
            visitat[u] = true; 
            for (int i = 0; i < graf[u].size(); ++i) {
                int v = graf[u][i].second; 
                int c = graf[u][i].first; 
                if (dist[v] > dist[u] + c) {
                    dist[v] = dist[u] + c; 
                    previ[v] = u; 
                    Q.push(ArcP(dist[v], v)); 
                }
            }
        }
    } 
    return dist[ultim]; 
}

int main () {
    int n, m; 
    while (cin >> n >> m) {
        GrafP graf (n); 
        llegir_graf(graf, m);
        int primer; cin >> primer; 
        int ultim; cin >> ultim;  
        double distancia_nodes = dijkstra(graf, primer, ultim); 
        if (distancia_nodes != numeric_limits<double>::infinity()) cout << distancia_nodes << endl; 
        else cout << "no path from " << primer << " to " << ultim << endl; 
    }   
}