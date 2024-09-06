#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

double descuento(double n) {
	return (n > 10000) * (n - (n * 0.2)) +
		(n < 10000) * (n - (n * 0.1));
}

int main() {
	int h;
	double monto; 

	cout << "Ingresa un monto: " ;
	cin >> monto; 

	//cout << "El monto ingresado es: " << monto;
	cout << "Con descuento: " << descuento(monto);
	
	h = _getch();
	return 0;
}