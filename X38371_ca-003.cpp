#include <iostream> 
#include <queue> 
#include <vector> 
using namespace std;

int min(const queue<int>& c, int& mn, int num) {
    if (c.size() == 1) return c.front(); 
    else if (num < mn) return num;
    return mn; 
}

int max(const queue<int>& c, int& mx, int num) {
   if (c.size() == 1) return c.front(); 
   else if (num > mx) return num;
   return mx; 
}

int min2(const queue<int>& c) {
    queue <int> aux(c); 
    int min = aux.front(); 
    aux.pop(); 
    while (not aux.empty()) {
        if (aux.front() < min) min = aux.front(); 
          aux.pop(); 
    }
    return min; 
}

int max2(const queue<int>& c) {
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
    
    int mx = 0; 
    int mn = 0; 
    
    queue <int> c; 
    
    while (num > -1002 and num < 1001) {
        
        if (num != -1001) {
            c.push(num); 
            mx = max(c, mx, num); 
            mn = min(c, mn, num); 
            cout << "min " << mn << "; max " << mx << "; media " << media(c) << endl; 
        }
        
        else {
            if (not c.empty()) c.pop(); 
            if (c.empty()) cout << 0 << endl; 
            
            else {
                mx = max2(c); 
                mn = min2(c); 
                cout << "min " << mn << "; max " << mx << "; media " << media(c) << endl;
            }
    
        }
        
        cin >> num; 
        
        }
}
            
    
    
