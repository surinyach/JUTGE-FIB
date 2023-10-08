#include <iostream> 
#include <math.h>
using namespace std; 

int main () {
cout.setf (ios::fixed);
cout.precision (6); 
int a, h; 
cin >> a;
h = 0; 

while (a > h) {
    string b; 
    cin >> b; 
    double ac, ar; 
    if ((b == "rectangle") or (b == "Rectangle")) {
        double bas, alt;
        cin >> bas >> alt; 
        ar = bas*alt; 
        cout << ar << endl; 
        h++;
    }
    else if ((b == "cercle") or (b == "Cercle")) { 
        double radi; 
        cin >> radi; 
        ac = M_PI*(radi*radi); 
        cout << ac << endl;
        h++; 
    }
}
}

        
    
