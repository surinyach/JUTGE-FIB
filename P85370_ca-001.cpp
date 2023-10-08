#include <iostream> 
using namespace std;

int main () {
cout.setf(ios::fixed);
cout.precision(4);
double ci, i, t;
string sc; 
cin >> ci >> i >> t >> sc;
double cf = 0; 

if (sc == "simple") {
    double h = 0;
    for (int j = 1; j <= t; ++j) {
        h = (h + ((ci*i)/100)); // 30 + 30 = 60 
        cf = ci + h;
    }
    } else if (sc == "compost") { 
           for (int k = 1; k <= t; ++k) {
            double h2 = 0; 
            h2 = (ci*i)/100; //1030 * 3/100 = 30.9
            ci = ci + h2; // 1030 + 30. 9 = 1060.9
            cf = ci; 
        }
    }
    cout << cf << endl; 
}
