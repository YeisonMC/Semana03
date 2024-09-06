#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

double convertirPulgadas(double n1) {
	return n1 / 2.54;
}

int main() {
	int h;
	double n1; 

	cout << "Ingresa la cantidad de centimetro: "; 
	cin >> n1; 

	cout << "Las pulgadas son: " << convertirPulgadas(n1); 

	h = _getch();
	return 0;
}