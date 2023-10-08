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

struct pares {
    int first;
    int second; 
}; 

typedef vector <pares> Vp; 
typedef vector <Vp> Resul; 
typedef vector <equipos> Classi; 

Resul read_res(int x) {
    Resul aux (x, Vp (x)); 
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            cin >> aux[i][j].first >> aux[i][j].second;
        }
    }
    return aux; 
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
    Resul r = read_res(n); 
    Classi c (n);
    for (int i = 0; i < n; ++i) {
        c[i].n = i + 1;
    }
    resultats(r, c); 
    sort(c.begin(), c.end(), cmp); 
    write_matrix(c); 
}
