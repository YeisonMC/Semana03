#include <iostream>
#include <conio.h>
#include <iomanip>  
using namespace std; 

int anio(long long codigo) {
	return codigo / 10000000;
}

int mes(long long codigo) {
	return (codigo / 100000) % 100;
}

char rAdmision(long long codigo) {
	int admision = (codigo / 1000) % 100;
	return (admision == 66) * 'E' +
		(admision == 77) * 'I';
}

char rcategoria(long long codigo){
	int categoria = (codigo / 10) % 100;
	return (categoria == 70) * 'C' +
		(categoria == 72) * 'H';
}

int becado(long long codigo) {
	return (codigo / 1) % 10;
}

int main() {

	int h; 
	long long  codigo;

	cout << "Ingresa el codigo: "; cin >> codigo;
	//= 20170666721; 


	cout << "Anioo de ingreso: " << anio(codigo) << endl;
	cout << "Mes de ingreso: " << mes(codigo) << endl;
	cout << "Modalidad de admision: " << rAdmision(codigo) << endl;
	cout << "Categoria: " << rcategoria(codigo) << endl;
	cout << "Es becado (0: No; 1; Si): "<< becado(codigo) << endl;

	h = _getch();
	return 0; 
}
