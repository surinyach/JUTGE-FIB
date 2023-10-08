#include <iostream> 
using namespace std; 

int main () {
char a; 
int contx = 0; 
int conty = 0; 

while (cin >> a) {
    if (a == 'n') --conty; 
    else if (a == 's') ++conty; 
    else if (a == 'e') ++contx; 
    else if (a == 'o') --contx; 
}
cout << '(' << contx << ", " << conty << ')' << endl; 
}
