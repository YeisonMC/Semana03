#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

double kMetro(double k) {
	return k * 1000;
}

int main() {
	int h;
	double k; 

	cout << "Ingresar la distancia en kilometros: ";
	cin >> k; 

	cout << "Los metros son: " << kMetro(k) << " metros";

	h = _getch();
	return 0;
}