#include <iostream>
#include <conio.h>
using namespace std; 

int numeroMayor(int n1, int n2, int n3) {
	return (n1 > n2 && n1 > n3) * n1 + (n2 > n1 && n2 > n3) * n2 + (n3 > n1 && n3 > n2) * n3;
}

int main() {
	int h, n1, n2, n3; 

	cout << "Ingresar numero 1: " ;
	cin >> n1;

	cout << "Ingresar numero 2: " ;
	cin >> n2;

	cout << "Ingresar numero 3: " ;
	cin >> n3;

	cout << "El numero mayor es: " << numeroMayor(n1, n2, n3);

	h = _getch();
	return 0; 
}