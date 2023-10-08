#include <iostream> 
#include <vector> 
#include <queue> 
using namespace std;

typedef pair<int, int> P;
typedef vector<vector<P>> Graf;

void llegir_graf (Graf& g, int m) {
    for (int i = 0; i < m; ++i) {
        int u; cin >> u; 
        int v; cin >> v; 
        int w; cin >> w; 
        P aux1 = P(w, v-1); 
        P aux2 = P(w, u-1); 
        g[u-1].push_back(aux1); 
        g[v-1].push_back(aux2); 
    }
}

int mst (const Graf& g) {
    int n = g.size(); 
    vector<bool> vis (n, false);
    vis[0] = true;
    priority_queue<P, vector<P>, greater<P>> q; 
    
    for (auto x : g[0]) q.push(x); 
    int nvertexs = 1;  
    int suma = 0; 

    while (nvertexs < n) {
        int cost = q.top().first; 
        int vertex = q.top().second; 
        q.pop(); 
        if (!vis[vertex]) {
            vis[vertex] = true; 
            for (auto p:g[vertex]) q.push(p); 
            ++nvertexs; 
            suma += cost; 
        }
    }

    return suma; 
}

int main () {
    int n, m; 
    while (cin >> n >> m) {
        Graf g (n); 
        llegir_graf (g, m); 
        int weight = mst(g); 
        cout << weight << endl; 
    }
}