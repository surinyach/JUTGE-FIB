#include <iostream> 
#include <set> 
using namespace std; 

int main () {  
    int x, y, n; 
    while(cin >> x >> y >> n) {
        set<int> nombres;
        set<int> c;
        int cont = 0; 
        bool cicle = false; 
        while (not cicle and n <= 100000000) {
            if (n%2 == 0) n = n/2 + x; 
            else n = 3*n + y; 
            if (nombres.find(n) != nombres.end()) {
                cicle = true;
                ++cont; 
                c.insert(n); 
            } 
            else nombres.insert(n); 
        }
        while (cicle) {

            if (n%2 == 0) n = n/2 + x; 
            else n = 3*n + y; 

            if (c.find(n) == c.end()) {
                c.insert(n); 
                ++cont; 
            }
            else cicle = false; 
        }
        if (cont != 0) cout << cont << endl; 
        else cout << n << endl; 
    }
}