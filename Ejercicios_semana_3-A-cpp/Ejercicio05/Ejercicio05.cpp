#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int nDelvolver(double n) {
	return (n < 0) * -1 + 
		   (n > 1) * 1 +
		   (n == 0) * 0; 
}

int main() {
	int h;
	double n; 

	cout << "Ingresar un valor real: "; 
	cin >> n; 

	cout << "El valor es: " << nDelvolver(n);

	h = _getch();
	return 0;
}