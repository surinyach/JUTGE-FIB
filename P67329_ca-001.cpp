#include <iostream> 
#include <vector> 
#include <queue> 
#include <cmath>
#include <string> 
#include <list> 
#include <set>
#include <numeric>
using namespace std;

int n; 
vector<char> c = {'A', 'C', 'G', 'T'};
vector<char> s;  

void escriure () {
    for (char i : s) cout << i;
    cout << endl;  
}

void backtrack (int p) {
    if (p == n) escriure(); 
    else {
        for (int j = 0; j < c.size(); ++j) {
            s[p] = c[j]; 
            backtrack(p + 1); 
        }
    }
}

int main () {
    cin >> n; 
    s = vector<char> (n);
    backtrack(0); 
}