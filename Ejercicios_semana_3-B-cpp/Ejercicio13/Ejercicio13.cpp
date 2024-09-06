#include <iostream>
#include <conio.h>
#include <string>
//#include <cmath>
#include <bitset>
using namespace std;


//string encriptarLetra(char letra, int base) {
//
//}

int main() {
	int h, edad, nacimiento;
	char nombre, apellido; 
	double peso, altura; 

	cout << "Ingrese primera letra del nombre: " ; 
	cin >> nombre; 
	/*cout << "Ingrese primera letra del apellido: " ; 
	cin >> apellido;
	cout << "Ingresar la edad: " ; 
	cin >> edad;
	cout << "Ingrese el año de nacimiento: ";
	cin >> nacimiento;
	cout << "Ingrese el peso: ";
	cin >> peso;
	cout << "Ingrese la estatura: ";
	cin >> altura;*/

	nombre = toupper(nombre);
	int ascNombre = nombre;

	string baseNombre = bitset<8>(ascNombre).to_string();
	baseNombre = baseNombre.substr(baseNombre.find('1'));

	//string cNombre = toBase(toupper(nombre), 2);
	cout << "La primera letra del nombre en base 2 es: " << baseNombre << endl;



	h = _getch();
	return 0;
}