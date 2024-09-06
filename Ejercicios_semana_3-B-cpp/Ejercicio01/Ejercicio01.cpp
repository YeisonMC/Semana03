#include <iostream> 
#include <conio.h> 
#include <string> 
#include <cmath>
using namespace std;

double resultado(double x) {
	double caso1 = pow(x, 6) + x - 2;
	double caso2 = sqrt(pow(x, 3) + 4 * x + 1);
	double caso3 = pow(x, 2) + 1; 

	double condicion1 = x <= 0;
	double condicion2 = (x > 0) * (x < 4);
	double condicion3 = x >= 4;

	return condicion1 * caso1 + condicion2 * caso2 + condicion3 * caso3;
}


int main() {
	int h;
	double x; 

	cout << "Ingrese el valor de x: ";
	cin >> x;

	cout << "La función es igual a: " << resultado(x);

	h = _getch();
	return 0;
}