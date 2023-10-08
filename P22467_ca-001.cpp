#include <iostream>
#include <math.h>
using namespace std;
bool es_primer(int a) {
  for (int i = 2; i*i <= a; ++i) {
    if (a%i == 0) return false;
  }
  if (a > 1) return true;
  else return false;
}

int suma(int c) {
  int s = 0;
  while (c > 0) {
    s += c%10;
    c = c/10;
  }
  return s;
}

 bool es_primer_perfecte(int n) {
 if (es_primer(n)) {
   if (n < 10) {
     if (es_primer(n)) return true;
     else return false;
   }

   else return es_primer_perfecte(suma (n));
}
else return false;
}

int main () {
  int b;
  cin >> b;

  if (es_primer_perfecte(b)) cout << "SI" << endl;
  else cout << "NO" << endl;
}
