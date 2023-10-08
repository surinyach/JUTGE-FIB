#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
#include <string> 
#include <list> 
#include <algorithm>
#include <set>
using namespace std;

typedef vector<vector<bool>> Taulell;

Taulell t; 
int n, r;

void escriu () {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (t[i][j]) cout << "K"; 
            else cout << "."; 
        }
        cout << endl; 
    }
    cout << "----------" << endl; 
}

bool possible (int x, int y) {
    for (int i = x-1; i <= x+1; ++i) {
        for (int j = y-1; j <= y+1; ++j) {
            if (i >= 0 && i < n && j >= 0 && j < n && t[i][j]) return false; 
        }
    }
    return true; 
}


void reis (int x, int y, int ract) {
    if (ract == r) escriu(); 
    else if (x < n && ract < r) {
        if (possible(x, y)) {
            t[x][y] = 1; 
            if (y < n - 1) reis(x, y + 1, ract + 1);
            else reis(x + 1, 0, ract + 1); 
            t[x][y] = 0; 
        }

        if (y < n - 1) reis (x, y + 1, ract); 
        else reis(x + 1, 0, ract); 
    }
}

int main () {
    cin >> n >> r; 
    t = Taulell (n, vector<bool> (n, 0)); 
    reis(0, 0, 0); 
}