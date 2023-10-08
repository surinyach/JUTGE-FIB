#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

    
bool major(int x, int y) {
    if (x > y) return true; 
    return false; 
}

int main () {
    int n; 
    while (cin >> n) {
        vector <int> v (n); 
        for (int i = 0; i < v.size(); ++i) cin >> v[i]; 
        sort(v.begin(), v.end(), major); 
       
        for (int i = 0; i < v.size(); ++i) {
            if (i != 0) cout << " " << v[i]; 
            else cout << v[i]; 
        }
        cout << endl; 
    }
}
