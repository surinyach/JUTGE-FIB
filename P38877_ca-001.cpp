#include <iostream>
#include <math.h>
using namespace std;

void girar (int n, int& i) {
    
    string s; 
    if (cin >> s) {
        girar (n , i);
        if (i <= n) {
            cout << s << endl; 
            ++i; 
        }
    }
    else i = 1; 
}

int main () {

    int n; 
    cin >> n; 
    girar (n,n); 

}


    

    
    
        
