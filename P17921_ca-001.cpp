#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
using namespace std;

int n; 
vector<int> t; 
vector<int> mc, md1, md2; 

int diagonalasc (int i, int j) {return i + j;} 
int diagonaldesc (int i, int j) {return i - j + n - 1;}

void escriu () {
    for (int i = 0; i < t.size(); ++i) {
        for (int j = 0; j < t.size(); ++j) {
            if (t[i] == j) cout << "Q"; 
            else cout << "."; 
        }
    cout << endl; 
    }
    cout << endl; 
}


void reines (int i) {
    if (i == t.size()) escriu(); 
    else {
        for (int j = 0; j < t.size(); ++j) {
            if (!mc[j] and !md1[diagonalasc(i, j)] and !md2[diagonaldesc(i, j)]) {
                t[i] = j; 
                mc[j] = md1[diagonalasc(i, j)] = md2[diagonaldesc(i, j)] = true; 
                reines(i + 1); 
                mc[j] = md1[diagonalasc(i, j)] = md2[diagonaldesc(i, j)] = false; 
            } 
        }
    }
}

int main () {
   cin >> n;
   t = vector <int> (n);
   mc = vector <int> (n, false); 
   md1 = md2 = vector<int> (2*n - 1, false); 
   reines(0); 
}