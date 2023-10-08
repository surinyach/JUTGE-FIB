#include <iostream> 
using namespace std; 

int main () {
int f, c; 
cin >> f >> c; 
int resul = 0;

for (int i = 0; i < f; ++i) {
    char num; 
    for (int j = 0; j < c; ++j) {
        cin >> num; 
        if ((j + i)%2 == 0) {
            resul += num - '0'; 
        }
    }
}
cout << resul << endl; 
}
