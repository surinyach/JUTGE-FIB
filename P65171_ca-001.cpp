#include <iostream> 
using namespace std; 

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    double  a, h, c, f, j, resul;
    h = 0; 
    c = 0; 
    int n; 
    cin >> n; 
    
for (int i = 0; i < n; ++i) {
    cin >> a; 
    h = h + (a*a);
    c = c + a;
}
f = h/(n-1); 
j = (c*c)/(n*(n-1));
resul = f - j; 
cout << resul << endl; 
}
    
