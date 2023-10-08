#include <iostream> 
#include <stack> 
using namespace std; 

int main () {

    stack <char> s; 
    char c; 
    
    bool correcte = true; 
    cin >> c; 
    
    while (correcte and c != '.') {
        if (c == '[' or c == '(') {
            s.push(c); 
        }
        else {
            if (c == ')') {
                if (s.top() != '(' or s.empty())  correcte = false; 
                else s.pop();
                
            } else {
                if (s.top() != '[' or s.empty()) correcte = false;
                else s.pop(); 
            }
        }
        cin >> c; 
    }
    
    if (not s.empty()) correcte = false;  
    
    if (correcte) cout << "Correcte" << endl; 
    else cout << "Incorrecte" << endl; 
}
    
