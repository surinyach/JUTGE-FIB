#include <iostream> 
using namespace std; 

int main () {
int a, c, d, e, f;
cin >> a;

c = a%1000; // c = 146
d = c%10; // d = 6
e = ((c/10)%10); // e = 4 
f = (c/100); // f = 1
cout << d+e+f << endl; 
} 
