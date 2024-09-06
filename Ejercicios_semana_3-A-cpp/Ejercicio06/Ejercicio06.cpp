#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

char pLetras() {
	char letra[5] = "Hola";
	return letra[0];
}

int main() {
	int h;

	string miNombre = "Yeissen";

	cout << "Letra de mi nombre: " << miNombre[0] << endl;

	cout << "Letra: "<< pLetras();
	h = _getch();
	return 0;
}