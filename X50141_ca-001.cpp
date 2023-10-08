#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std; 

int engreixa(int x) {
    
    if (10 > x) return x;
    else {
        int en = engreixa(x/10);
        if (x%10 > en%10) return en*10 + x%10; 
        else return en*10 + en%10; 
    }
}

int main () {
    
    int a; 
    while (cin >> a) cout << engreixa(a) << endl; 

}
