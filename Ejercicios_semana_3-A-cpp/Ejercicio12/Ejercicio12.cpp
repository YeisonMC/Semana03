#include <iostream> 
#include <conio.h> 
#include <string> 
using namespace std;


char rDepartamento(int codigo) {
	int departamento = codigo / 1000;
	return (departamento == 1) * 'T' +
		(departamento == 2) * 'A' +
		(departamento == 3) * 'P';
}

int horaSalida(int codigo) {
	return (codigo / 10) % 100;
}

char rSParada(int codigo) {
	int sParada = (codigo / 1) % 10;
	return (sParada == 1) * 'S' +
		(sParada == 2) * 'N';
}

int main() {
	int h;
	int codigo;
	//= 1182;

	cout << "Ingrese un codigo de salida: ";
	cin >> codigo;

	/*int departamento = codigo / 1000;
	int horaSalida = (codigo / 10) % 100;
	int sParada = (codigo / 1) % 10;

	char rDepartamento = (departamento == 1) * 'T' +
		(departamento == 2) * 'A' +
		(departamento == 3) * 'P';

	char rSParada = (sParada == 1) * 'S' +
		(sParada == 2) * 'N';*/

	cout << "Departamento de destino: " << rDepartamento(codigo) << endl;
	cout << "Hora de salida: " << horaSalida(codigo) << " horas" << endl;
	cout << "Realizan paradas: " << rSParada(codigo) << endl;

	h = _getch();
	return 0;
}