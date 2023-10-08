#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 

struct equipos {
    int n; 
    int p = 0; 
    int gf = 0;
    int gc = 0; 
}; 

typedef pair<int, int> Par; 
typedef vector <Par> Vp;
typedef vector <Vp> Resul; 
typedef vector <equipos> Classi; 

void read_matrix (Resul& r, Classi& c) {
    
    for (int i = 0; i < r.size(); ++i) {
        for (int j = 0; j < r[0].size(); ++j) {
            cin >> r[i][j].first >> r[i][j].second; 
        }
    }
    
    for (int i = 0; i < c.size(); ++i) {
        c[i].n = i + 1; 
    }
}
    
void resultats(const Resul& r, Classi& c) {
    for (int i = 0; i < r.size(); ++i) {
        for (int j = 0; j < r[0].size(); ++j) {
            if (j != i) {
                if (r[i][j].first > r[i][j].second) c[i].p += 3; 
                else if (r[i][j].first < r[i][j].second) c[j].p += 3; 
                else {
                    c[i].p += 1; 
                    c[j].p += 1; 
                }
                c[i].gf += r[i][j].first; 
                c[i].gc += r[i][j].second; 
                c[j].gf += r[i][j].second; 
                c[j].gc += r[i][j].first; 
            }
        }
    }
}

bool cmp (equipos e1, equipos e2) {
    if (e1.p != e2.p) return e1.p > e2.p; 
    else if ((e1.gf - e1.gc) != (e2.gf - e2.gc)) return (e1.gf - e1.gc) > (e2.gf - e2.gc); 
    return e1.n < e2.n; 
}

void write_matrix(const Classi& c) {
    for (int i = 0; i < c.size(); ++i) {
        cout << c[i].n << " " << c[i].p << " " << c[i].gf << " " << c[i].gc << endl; 
    }
}
                
int main () {
    int n; 
    cin >> n; 
    Resul r (n, Vp (n));  
    Classi c (n);
    read_matrix (r, c); 
    resultats(r, c); 
    sort(c.begin(), c.end(), cmp); 
    write_matrix(c); 
}
