#include <iostream>
using namespace std;

int main () {
char a, b;

cin >> a;
if (a <= 90) {
b = char(int(a) - int('A') + int('a'));
}
else {
b = char(int(a) - 97 + 65);
}
cout << b << endl;
}
