#include <iostream> 
using namespace std;

int main () {
char a, b;

cin >> a;
if (a <= 'Z' && a >= 'A') {
b = (a - 'A' + 'a');
}
else {
b = (a - 'a' + 'A');
}
cout << b << endl;
}
