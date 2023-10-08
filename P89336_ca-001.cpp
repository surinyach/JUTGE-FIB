#include <iostream>
#include <math.h>
using namespace std;

void girar (int& i) {
    
    string s; 
    if (cin >> s) {
        ++i; 
        girar(i); 
        if (i <= 0) cout << s << endl; 
        i -= 2; 
        }
}

int main () {

    int i = 0; 
    girar (i); 

}
    
    
        
