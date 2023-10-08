#include <iostream> 
using namespace std; 

int main () {

int a; 


while (cin >> a) {
    int b = a; 
    int cont = 0; 
    while (b != 1) {
        if (b%2 == 0) b = b/2; 
        else b = 3*b + 1; 
    ++cont; 
    }
    cout << cont << endl; 
}
}
