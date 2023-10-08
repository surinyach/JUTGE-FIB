#include <iostream>
using namespace std;
int nombre_digits (int n)  {

	if (10 > n) return 1; 
	else  return 1 + nombre_digits(n/10); 

}

int main () {

	int a = 0;
	cin >> a;
	cout << nombre_digits(a) << endl;


}
