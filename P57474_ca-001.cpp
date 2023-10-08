#include <iostream>
using namespace std;
int factorial (int n)  {

	int resul = 0;
	if (n == 0) resul = 1;
	else resul = n*(factorial(n-1));
	return resul;

}

int main () {

	int a = 0;
	cin >> a;

	cout << factorial(a) << endl;


}
