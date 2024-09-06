#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void horas(int s) {
	int horas = (s / 3600);
	int minutos = (s - horas * 3600) / 60;
	int segundos = s - (horas * 3600 + minutos * 60);
	cout << "Las horas son: " << horas << endl;
	cout << "Los minutos son: " << minutos << endl;
	cout << "Los segundos son: " << segundos << endl;
}

int main() {
	int h, s;

	cout << "Ingresa los segundos: ";
	cin >> s;

	horas(s);
	
	h = _getch();
	return 0;
}