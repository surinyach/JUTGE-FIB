#include <iostream>
using namespace std;
int nombre_digits (int n)  {

	int resul = 0;
	if (10 > n) resul = 1;
	else resul = 1 + nombre_digits(n/10); 
	return resul;

}

int main () {

	int a = 0;
	cin >> a;
	cout << nombre_digits(a) << endl;


}
