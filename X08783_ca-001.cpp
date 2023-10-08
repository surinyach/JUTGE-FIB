#include <iostream> 
using namespace std;

int main () {
int a, b; 


while (cin >> a >> b) {
    int cont = 1; 
    while (a <= b) { 
        b = b/a; 
        ++cont; 
    }
    cout << cont << endl; 
    }
}
        
    
