#include <iostream>
#include <math.h>
using namespace std;

void girar () {
    
    string s; 
    if (cin >> s and s != "fi" ) {
        girar ();
        cout << s << endl; 
    }
}

int main () {
    
    girar(); 

}

    

    
    
        
