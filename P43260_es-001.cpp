#include <iostream>
#include <vector>

using namespace std;

int power (int n, int k) {
    int res = 1;
    while (k) {
        if (k%2) res *= n;
        n *= n;
        k /= 2;
    }
    return res;
}

void fn (vector< vector<char> >& mat, int x1, int y1, int x2) {
    int n = x2 - x1 + 1;
    if (n == 3) {
        mat[y1][x1 + 1] = mat[y1 + 2][x1 + 1] = '|';
        mat[y1 + 1][x1] = mat[y1 + 1][x1 + 2] = '-';
        mat[y1 + 1][x1 + 1] = 'O';
    } else {
        int k = n/3;
        fn(mat, x1 + k, y1, x1 + 2*k - 1);
        for (int i = 1; i <= 3; ++i) {
            fn(mat, x1 + (i - 1)*k, y1 + k, x1 + i*k - 1);
        }
        fn(mat, x1 + k, y1 + 2*k, x1 + 2*k - 1);
    }
}

int main () {
    int n;
    cin >> n;
    int mx = power(3, n);
    vector< vector<char> > mat(mx + 1, vector<char>(mx + 2, ' '));
    fn(mat, 1, 1, mx);
    for (int i = 1; i <= mx; ++i) {
        for (int j = 0; j <= mx + 1; ++j) {
            if (j == 0) cout << '|';
            else if (j == mx + 1) cout << '|';
            else cout << mat[i][j];
        }
        cout << endl;
    }
}
