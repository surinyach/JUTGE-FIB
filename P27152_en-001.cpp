#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main () {
char c;
int resul = 0;
while (cin >> c) {
    if (c == 'a' or c == 'e') ++resul;
    if (c == 'o' or c == 's') resul += 2;
    if (c == 'd' or c == 'i' or c == 'n' or c == 'r') resul += 3;
    if (c == 'c' or c == 'l' or c == 't' or c == 'u') resul += 4;
    if (c == 'm' or c == 'p') resul += 5;
    if (c == 'b' or c == 'f' or c == 'g' or c == 'h' or c == 'j' or c == 'q' or c == 'v' or c == 'x' or c == 'y' or c == 'z') resul += 6;
    if (c == 'k' or c == 'w') resul += 7;
}
cout << resul << endl;
}
