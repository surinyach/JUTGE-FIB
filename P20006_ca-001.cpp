#include <iostream>
#include <math.h>
using namespace std;

int op ()  {
    
    char c; 
    cin >> c; 
    if (c == '+') return op() + op(); 
    if (c == '-') return op() - op(); 
    if (c == '*') return op()*op(); 
    return c - '0';
    
}

int main () {
    
    cout << op () << endl; 

}
    
    
