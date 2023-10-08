#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 

int avalua(const vector <int>& p, int x) {
    int n = p.size(), aux, sum = 0; 
    for (int i = 0; i < n; ++i) {
        aux = pow(x, i); 
        sum += (p[i] * aux); 
    }
    return sum; 
}
