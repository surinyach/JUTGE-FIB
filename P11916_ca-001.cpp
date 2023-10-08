#include <iostream> 
#include <vector> 
#include <cmath> 
#include <string> 
using namespace std; 
    
double factorial (int x) {
  if (x == 0 or x == 1) return 1; 
  else {
      double solucio = factorial (x - 1)*x;
      return solucio; 
  }
}

double exponencial (double facto) {
    double exp = 1/facto; 
    return exp; 
}

int main () {
    
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int a;
    
    while (cin >> a) {
        
         double expo = 0; 
         
         for (int i = 0; i < a; ++i) {
             double fact = factorial(i); 
             expo += exponencial(fact); 
         }
         
         cout << "Amb " << a << " terme(s) s'obte " << expo << "." <<  endl; 
    }
}
