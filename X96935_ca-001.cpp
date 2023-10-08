#include <iostream> 
#include <vector>
#include <stack> 
using namespace std;

int main () {
    
 int n; 
 cin >> n; 
 
 stack <int> meitat; 
 bool palindrom = true; 
 
 for (int i = 0; i < n/2; ++i) {
     int k; 
     cin >> k; 
     meitat.push(k); 
 }
 
 int p;
 int j = n/2; 
 if (n%2 != 0) {
     ++j;
     cin >> p; 
 }
     
 for (int i = j ; i < n; ++i) {
  
     cin >> p; 
     if (meitat.top() != p) palindrom = false; 
     meitat.pop();
 }
 
 if (palindrom) cout << "SI" << endl; 
 else cout << "NO" << endl; 
    
}
