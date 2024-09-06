#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float calcularCubo(float n1) {
	return pow(n1, 3);;
}

int main() {
	int h;
	float n1;

	cout << "Ingresa el valor del cubo: ";
	cin >> n1;

	cout << "El calculo del cubo es: " << calcularCubo(n1);

	h = _getch();
	return 0;
}
