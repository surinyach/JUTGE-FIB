#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
#include <iostream>

using namespace std;

void fn (int x, int y) {

    if (x/2 != 0 and y/2 != 0) fn(x/2, y/2);
    
    if (x%2 == 0) cout << 0;
    else cout << 1; 
    
    if (y%2 == 0) cout << 0;
    else cout << 1; 

}

int main () {
    
    int a, b; 
    while (cin >> a >> b) {
        fn(a, b);
        cout << endl; 
    }
    
}
        
