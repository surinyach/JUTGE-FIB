#include <iostream>
using namespace std; 


int main () {
    cout.setf (ios::fixed);
    cout.precision (4);
    double a, i, res, b; 
    cin >> a; 
    i = 0; 
    res = 0; 
    
    while (i < a) { // 3
    ++i; 
    b = 1/i; 
    res = b + res; 
    }
cout << res << endl; 
}




    
