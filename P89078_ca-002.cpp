#include <iostream> 
using namespace std; 

int main () {
int a; 
bool no = true; 
int contador = 1; 

while (cin >> a and (no)) {
    if (a%2 == 0) no = false; 
    else if (a%2 != 0) ++contador;
}
cout << contador << endl; 
}
