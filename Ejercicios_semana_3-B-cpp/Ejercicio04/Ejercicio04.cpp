#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

double precio(int color, int almacenamiento, char marca) {
	int precio = (tolower(marca) == 'n' && color == 0 && almacenamiento == 8) * 1800 +
		(tolower(marca) == 'n' && color == 0 && almacenamiento == 16) * 2650 +
		(tolower(marca) == 'n' && color == 1 && almacenamiento == 16) * 2780 +
		(tolower(marca) == 's' && color == 0 && almacenamiento == 8) * 1700 +
		(tolower(marca) == 's' && color == 0 && almacenamiento == 16) * 2500 +
		(tolower(marca) == 's' && color == 1 && almacenamiento == 16) * 2900;
	return (precio >= 2800) * (precio - (precio * 0.06)) + (precio < 2800) * precio;
}


int main() {
	int h, color, almacenamiento;
	char marca;

	cout << "Ingrese la marca NOKIA(N) SANSUMG(S): " ; cin >> marca;
	cout << "Ingrese color (0) Rojo (1) Blanco: " ; cin >> color;
	cout << "Capacidad (8)GB (16)GB: " ; cin >> almacenamiento;
 
	cout << "Usted pagará: S/." << precio(color, almacenamiento, marca);

	h = _getch();
	return 0;
}


