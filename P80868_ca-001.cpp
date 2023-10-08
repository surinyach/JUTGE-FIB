#include <iostream>
#include <vector>
using namespace std;

int nombre_digits(int n) {
    if (n < 10) return 1;
    return 1 + nombre_digits(n/10);
}

int main() {
    int n, f;
    cin >> n >> f;
    int digits = nombre_digits(n);
    int caracteres_totales = 2*f*digits + 2*f - 1;
    int caracteres_primera_fila = caracteres_totales - 2*digits;
    for (int i = 0; i < f; ++i) {
        bool primer1 = true;
        for (int j = 0; j < 2*(i + 1); ++j) {
            if (j < i + 1) {
                if (primer1) {
                    primer1 = false;
                    cout << n;
                }
                else cout << '-' << n;
            }
            else {
                if (j == i + 1) {
                    for (int k = 0; k < caracteres_primera_fila; ++k) {
                        cout << '.';
                    }
                    caracteres_primera_fila = caracteres_primera_fila - 2*digits - 2;
                }
                if (j == 2*(i + 1) - 1) cout << n;
                else cout << n << '-';
            }
        }
        cout << endl;
    }
}
