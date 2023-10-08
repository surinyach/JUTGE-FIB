#include <iostream> 
#include <map> 
using namespace std; 

int main () {  
    string sentence;
    map <string, int> paraules;  
    while (cin >> sentence) {
        if (sentence == "store") {
            string word; 
            cin >> word; 
            if (paraules.find(word) == paraules.end()) paraules.insert(make_pair(word, 1)); 
            else paraules[word] += 1; 
        }
        if (sentence == "delete") {
            string word; 
            cin >> word; 
            if (paraules.find(word) != paraules.end()) {
                if (paraules[word] > 1) paraules[word] -= 1; 
                else paraules.erase(word); 
            }
        }
        if (sentence == "maximum?") {
            if (not paraules.empty()) {
                auto it = paraules.end(); 
                --it; 
                cout << "maximum: " << it->first << ", " << it->second << " time(s)" << endl; 
            }
            else cout << "indefinite maximum" << endl; 
        }
        if (sentence == "minimum?") {
            if (not paraules.empty()) { 
                auto it = paraules.begin(); 
                cout << "minimum: " << it->first << ", " << it->second << " time(s)" << endl; 
            }
            else cout << "indefinite minimum" << endl; 
        }
    }
}