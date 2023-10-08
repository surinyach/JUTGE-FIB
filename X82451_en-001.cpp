#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <cmath> 
using namespace std; 

struct Point {
    int x, y; 
}; 

Point read_point() {
    Point p; 
    cin >> p.x >> p.y; 
    return p; 
}

struct Rectangle {
    int xmin, ymin, xmax, ymax; 
}; 

Rectangle read_rectangle() {
    Rectangle r; 
    cin >> r.xmin >> r.ymin >> r.xmax >> r.ymax; 
    return r; 
} 

string containtment(Point p, Rectangle r) {
    if (p.x < r.xmin) return "outside"; 
    else if (p.x > r.xmax) return "outside"; 
    else {
        if (p.y < r.ymin) return "outside"; 
        else if (p.y > r.ymax) return "outside"; 
        else if (p.x == r.xmin or p.x == r.xmax) return "border"; 
        else if (p.y == r.ymin or p.y == r.ymax) return "border"; 
        else return "inside"; 
    }
}

int main () {
    int inputs; 
    cin >> inputs; 
    
    Point p; 
    Rectangle r; 
    
    for (int i = 0; i < inputs; ++i) {
        p = read_point(); 
        r = read_rectangle(); 
        string result = containtment(p, r); 
        cout << result << endl; 
    }
}

