#include <iostream>
using namespace std; 

int main () {
    int a, i, res, b; 
    cin >> a; 
    i = 0; 
    res = 0; 
    
    while (i < a) { // 3
    ++i; 
    b = i*i; 
    res = b + res; 
    }
cout << res << endl; 
}




    
