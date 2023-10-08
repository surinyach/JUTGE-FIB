#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <cmath> 
#include <map>
using namespace std; 

int posicio_maxim(const vector<double>& v, int m) {
    int max = 0; 
    double max_value = v[0]; 
    for (int i = 1; i <= m; ++i) {
        if (v[i] > max_value) {
            max = i; 
            max_value = v[i]; 
        }
    }
    return max; 
}

int main () {
}
