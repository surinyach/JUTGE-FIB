#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <cmath> 
using namespace std; 

void ordena_per_insercio(vector<double>& v) {
    for (int i = 1; i < v.size(); ++i) {
        double x = v[i]; 
        int j = i; 
        while (j > 0 and v[j - 1] > x) {
            v[j] = v[j - 1]; 
            --j; 
        }
        v[j] = x; 
    }
}

int main () {
}
