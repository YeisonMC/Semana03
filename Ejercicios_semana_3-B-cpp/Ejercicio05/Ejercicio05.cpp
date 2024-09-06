#include <iostream>
#include <conio.h>
using namespace std;

int obtener_precio(long long codigo_barras) {
	return codigo_barras % 100;
}

double calcular_monto_pagar(int cantidad_comprada, int precio) {
	return cantidad_comprada * precio;
}

double calcular_descuento(int monto_pagar){
	return  (monto_pagar < 1000) * monto_pagar +
		   (monto_pagar >= 1000 && monto_pagar <= 1500) * (monto_pagar - (monto_pagar * 0.1)) +
		   (monto_pagar > 1500) * (monto_pagar - (monto_pagar * 0.2));
}

void imprimir_resultados(long long codigo_barras, int precio, double monto_pagar,
	int cantidad_comprada, double descuento_obtenido) {

	cout << "Resultado" << endl;
	cout << "Codigo de barras: " << codigo_barras << endl;
	cout << "Precio del producto: " << precio << endl;
	cout << "Monto a pagar por " << cantidad_comprada << " unidades: " << monto_pagar << endl;
	cout << "Descuento obtenido: " << descuento_obtenido << " ("
		<< (descuento_obtenido / monto_pagar * 100) << "%)" << endl;
	cout << "Monto total a pagar: " << monto_pagar - descuento_obtenido << endl;
}

int main() {
	int h;

	long long codigo;
	int cantidad;

	cout << "Ingrese el código de barras del producto: ";
	cin >> codigo;
	cout << "Ingrese la cantidad que desea comprar: ";
	cin >> cantidad;

	int precio = obtener_precio(codigo);
	double monto_pagar = calcular_monto_pagar(cantidad, precio);
	double descuento = calcular_descuento(monto_pagar);

	imprimir_resultados(codigo, precio, monto_pagar, cantidad, descuento);
	h = _getch();
	return 0;
}