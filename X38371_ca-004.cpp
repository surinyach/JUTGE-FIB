#include <iostream> 
#include <queue> 
#include <vector> 
using namespace std;

typedef queue <int> cua; 

int mn(const queue<int>& c) {
    queue <int> aux(c); 
    int min = aux.front(); 
    aux.pop(); 
    while (not aux.empty()) {
        if (aux.front() < min) min = aux.front(); 
          aux.pop(); 
    }
    return min; 
}


int mx(const queue<int>& c) {
    queue <int> aux(c); 
    int max = aux.front(); 
    aux.pop(); 
    while (not aux.empty()) {
        if (aux.front() > max) max = aux.front(); 
        aux.pop(); 
    }
    return max; 
}

int main () {
    
    int n; 
    cin >> n; 
    
    cua c; 
    double total = 0;
    
    int max = -1002; 
    int min = 1001;
    
 
    
    while (n >= -1001 and n <= 1000) {
        
        if (n == -1001) {
            
            bool operar = false;
            
            if (not c.empty()) {
                total = total - c.front();
                if (c.front() == min or c.front() == max) operar = true; 
                c.pop();
            }
            
            if (not c.empty()) {
                if (operar) {
                    min = mn(c); 
                    max = mx(c); 
                }
                cout << "min " << min << "; max " << max << "; media " << total/c.size() << endl;
            }
            
            else {
                cout << 0 << endl; 
                total = 0; 
                max = -1002; 
                min = 1001; 
            }
        
        }
        
        else {
            
            total += n;
            if (n > max) max = n; 
            if (n < min) min = n; 
            c.push(n); 
            cout << "min " << min << "; max " << max << "; media " << total/c.size() << endl; 
        }
        
        cin >> n; 
    }
    
}
    
    
