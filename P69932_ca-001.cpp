#include <iostream>
#include <sstream>
#include <set> 
using namespace std;

int total (const set <int> num) {
    int cont = 0;
    if (num.size() != 0) {
        auto it = num.begin(); 
        auto it2 = it; 
        ++it2; 
        while (it2 != num.end()) {
            if (*it%2 != 0 and *it2%2 == 0) ++cont; 
            else if (*it%2 == 0 and *it2%2 != 0) ++cont; 
            ++it; 
            ++it2; 
        }
        ++cont; //contar el ultimo numero. 
    }
    return cont; 
}

int main() {
    string n; 
    while (getline(cin, n)) {
        set <int> num; 
        istringstream s(n); 
        int x;  
        while (s >> x) num.insert(x); 
        cout << total(num) << endl; 
    }
}