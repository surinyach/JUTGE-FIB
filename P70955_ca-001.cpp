#include <iostream> 
using namespace std;

int main () {
int a, b, c, d, e, f;
cin >> a >> b >> c >> d >> e; 

f = (a*31536000) + (b*86400) + (c*3600) + (d*60) + e;

cout << f << endl; 
}
