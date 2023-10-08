#include <iostream> 
using namespace std; 

int main () {
int a, b, c = 1; 
cin >> a; 
b = a; 

while (c <= a) {
    int i = 1; // 7
    while (i < b) { // 1 8; 1 -- 7
        cout << '+'; 
        ++i; 
    } 
    if (i == b) cout << '/'; 
    while (i < a) { // i = 7; * 8 ; 
        cout << '*'; 
        ++i; 
    }
    cout << endl; 
    --b; 
    ++c; 
}
}



    
    
