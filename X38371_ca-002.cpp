#include <iostream> 
#include <queue> 
#include <vector> 
using namespace std;

void operacio(const queue <int>& c, int& max, int& min, double& media) {
    queue <int> aux (c); 
    max = aux.front(); 
    min = aux.front(); 
    media = aux.front(); 
    aux.pop(); 
    while (not aux.empty()) {
        if (aux.front() > max) max = aux.front(); 
        if (aux.front() < min) min = aux.front(); 
        media += aux.front(); 
        aux.pop(); 
    }
    media /= c.size(); 
}
    
int main () {
    
    int num; 
    cin >> num;
    
    queue <int> c; 
    
    while (num > -1002 and num < 1001) {
        
        int max = 0; 
        int min = 0; 
        double media = 0; 
        
        if (num != -1001) {
            c.push(num); 
            operacio (c, max, min, media); 
            cout << "min " << min << "; max " << max << "; media " << media << endl; 
        }
        
        else {
            if (not c.empty()) c.pop(); 
            if (c.empty()) cout << 0 << endl; 
            else {
                operacio(c, max, min, media); 
                cout << "min " << min << "; max " << max << "; media " << media << endl; 
            }
        }
        cin >> num; 
        
    }
    
}
            
    
