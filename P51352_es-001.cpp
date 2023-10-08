#include <iostream> 
using namespace std; 

int main () {
char a, b; 
// A = 65 ; P = 80 ; V = 86. 
cin >> a >> b; 
if (a == 65) {
    if (b == 80) cout << '1' << endl;
    else if (b == 86) cout << '2' << endl;
    else if (b == 65) cout << '-' << endl; 
} if (a == 80) {
    if (b == 80) cout << '-' << endl; 
    else if (b == 86) cout << '1' << endl;
    else if (b == 65) cout << '2' << endl;
} if (a == 86) {
    if (b == 86) cout << '-' << endl; 
    else if (b == 65) cout << '1' << endl;
    else if (b == 80) cout << '2' << endl;
}
}
