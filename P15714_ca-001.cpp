#include <iostream> 
#include <vector> 
#include <cmath> 
#include <string> 
using namespace std; 
    
int main() {
    
char a; 

cin >> a; 

int curtes = 0, mitjanes = 0, llargues = 0; 

while (a != '.') {
    
    int cont = 0; 
    
    while (a != '-' and a != '.') {
        cin >> a; 
        ++cont; 
    }
    
    if (cont >= 1 and cont < 5) ++curtes; 
    if (cont >= 5 and cont <= 9) ++mitjanes; 
    if (cont > 9) ++llargues; 
    
    if (a != '.') cin >> a;  
}

cout << curtes << "," << mitjanes << "," << llargues << endl; 

}

