#include <iostream>
#include <vector>
#include <string>
#include <cmath> 
using namespace std;
 
double distancia(double x1, double y1, double x2, double y2) {
    
    double r1 = x1 - x2;    
    double r2 = y1 - y2; 
    
    double n1 = pow(r1, 2); 
    double n2 = pow(r2, 2); 
    
    double res = sqrt(n1 + n2); 
    return res; 
}

int main () {
    
cout.setf(ios::fixed); 
cout.precision(4); 
    
string s; 

while (cin >> s) {
     
     double total = 0; 
     
     double a, b; 
     cin >> a >> b; 
     
     double ini1 = a; 
     double ini2 = b; 

     double c, d; 
     cin >> c >> d; 
     
     while (c != ini1 or d != ini2) {
        
     total += distancia(a, b, c, d);
     
     a = c; 
     b = d; 
     
     cin >> c >> d; 
     
     }
     
     total += distancia(a, b, c, d);
     
     cout << "Trajecte " << s << ": " << total << endl; 
}

}
        
