#include <iostream> 
using namespace std; 

int main () {

int a; 
int b = 0; 

cin >> a; 

for (int i = 1; i <= a; ++i) {
    cin >> b; 
}
cout << "A la posicio " << a << " hi ha un " << b << "." << endl; 
}
