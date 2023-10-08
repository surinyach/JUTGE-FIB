#include <iostream> 
#include <stack> 
#include <vector> 
using namespace std;

typedef stack <string> cat; 

void primera_instruccio (vector<cat>& c) {
    string s; 
    cin >> s; 
    int num; 
    cin >> num; 
    c[num - 1].push(s); 
}

void segona_instruccio (vector<cat>& c) {
    int retirar; 
    cin >> retirar;
    int num; 
    cin >> num; 
    for (int i = 0; i < retirar; ++i) {
        c[num - 1].pop();
    }
}
    
void tercera_instruccio (const vector<cat>& c) {
    int num; 
    cin >> num; 
    cat imprimir(c[num - 1]);
    cout << "Pila de la categoria " << num << endl; 
    while (not imprimir.empty()) {
        cout << imprimir.top() << endl;
        imprimir.pop(); 
    }
}
        
int main () {
    
    int n; 
    cin >> n; 
    
    vector <cat> c (n); 
    
    string inst; 
    cin >> inst; 
    
    while (inst != "-4") {
        
        if (inst == "-1") primera_instruccio(c);
        if (inst == "-2") segona_instruccio(c);
        if (inst == "-3") tercera_instruccio(c); 
        cin >> inst; 
    }
}
