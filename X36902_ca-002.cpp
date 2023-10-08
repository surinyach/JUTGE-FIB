#include <iostream> 
#include <stack> 
using namespace std; 

int main () {

    stack <char> s; 
    char c; 
    bool error = false; 
    cin >> c; 
    while (not error and c != '.') {
        if (c == '[' or c == '(') {
            s.push(c); 
        }
        else {
            if (c == ')') {
                if (s.top() != '(' or s.empty())  error = true; 
                else s.pop();
                
            } else if (c == ']') {
                if (s.top() != '[' or s.empty()) error = true;
                else s.pop(); 
            }
        }
        cin >> c; 
    }
    if (not s.empty()) error = true; 
    if (not error) cout << "Correcte" << endl; 
    else cout << "Incorrecte" << endl; 
}
    
