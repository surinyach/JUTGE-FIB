#include <iostream>
using namespace std;

int main() {
    int a;
    int h,m,s;
    
    cin >> a;
    h = a/3600;
    m = (a%3600)/60;
    s = (a%3600)%60;
    cout << h << ' ' << m << ' ' << s << endl;
}
