#include <iostream> 
using namespace std;

int main () {
int a, b, c, d;
cin >> a >> b >> c >> d; 

if (a == c and b == d) {
    cout << '=' << ' ' << ','; 
} else if (a <= c and b-c >= 0) {
    if (d <= b) cout << '2' << ' ' << ',';
    else if (b <= d and a == c) cout << '1'<< ' ' << ',';
    else if (b < d) cout << '?' << ' ' << ',';
} else if (c < a and d-a >= 0) {
    if (b <= d) cout << '1' << ' ' << ',';
    else if (d < b) cout << '?' << ' ' << ',';
} else cout << '?' << ' ' << ','; {
}
if (a <= c and b-c >= 0) {
    if (d <= b) cout << ' ' << '[' << c << ',' << d << ']' << endl;
    else if (b < d) cout << ' ' << '[' << c << ',' << b << ']' << endl;
    else if (b < d) cout << ' ' << '?' << endl;
} else if (c < a and d-a >= 0) {
    if (d <= b) cout << ' ' << '[' << a << ',' << d << ']' << endl;
    else if (b < d) cout << ' ' << '[' << a << ',' << b << ']' << endl;
} else cout << ' ' << "[]" << endl; {
}
}
