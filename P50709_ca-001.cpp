#include <iostream> 
#include <queue> 
using namespace std; 

int main () {
    char x; 
    priority_queue<int> list;
    while (cin >> x) {
        if (x == 'S') {
            int num; 
            cin >> num; 
            list.push(num);  
        }
        else if (list.empty()) {
            int sobra; 
            if (x == 'I' or x == 'D') cin >> sobra; 
            cout << "error!" << endl;
        } 
        else {
            if (x == 'A') cout << list.top() << endl; 
            if (x == 'R') list.pop(); 
            if (x == 'I') {
                int inc; 
                cin >> inc; 
                int plus = list.top(); 
                plus += inc; 
                list.pop(); 
                list.push(plus); 
            }
            if (x == 'D') {
                int inc; 
                cin >> inc; 
                int dec = list.top(); 
                dec -= inc; 
                list.pop(); 
                list.push(dec); 
            }
        }
    }
}