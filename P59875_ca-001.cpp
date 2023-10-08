#include <iostream>
using namespace std;

int main () {
int a, b; 
cin >> a >> b; 

if (b < a) {
    a = a + 1;
while (b < a) {
     a = (a - 1);
     cout << a << endl; 
}
}
else if (a == b) {
    cout << a << endl; 
} else {
    b = b + 1; 
while (b > a) {
     b = (b - 1);
     cout << b << endl; 
}
}
}

    
