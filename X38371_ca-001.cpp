#include <iostream> 
#include <queue> 
#include <vector> 
using namespace std;

int min(const queue<int>& c) {
    queue <int> aux(c); 
    int min = aux.front(); 
    aux.pop(); 
    while (not aux.empty()) {
        if (aux.front() < min) min = aux.front(); 
          aux.pop(); 
    }
    return min; 
}

int max(const queue<int>& c) {
    queue <int> aux(c); 
    int max = aux.front(); 
    aux.pop(); 
    while (not aux.empty()) {
        if (aux.front() > max) max = aux.front(); 
        aux.pop(); 
    }
    return max; 
}

double media(const queue<int>& c) {
    queue <int> aux(c);
    double total = 0; 
    while (not aux.empty()) {
        total += aux.front(); 
        aux.pop(); 
    }
    return total/c.size(); 
}

int main () {
    
    int num; 
    cin >> num;
    
    queue <int> c; 
    
    while (num > -1002 and num < 1001) {
        
        if (num != -1001) {
            c.push(num); 
            cout << "min " << min(c) << "; max " << max(c) << "; media " << media(c) << endl; 
        }
        
        else {
            if (not c.empty()) c.pop(); 
            if (c.empty()) cout << 0 << endl; 
            else cout << "min " << min(c) << "; max " << max(c) << "; media " << media(c) << endl; 
        }
        
        cin >> num; 
        
    }
    
}
            
    
