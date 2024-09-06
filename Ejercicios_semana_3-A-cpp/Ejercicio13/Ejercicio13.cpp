#include <iostream> 
#include <conio.h> 
#include <string> 
#include <cctype>
using namespace std;

int rPrecio(char marca, char categoria) {
	return (tolower(marca) == 'b' && tolower(categoria) == 'p') * 1300 +
		(tolower(marca) == 'b' && tolower(categoria) == 'm') * 1000 +
		(tolower(marca) == 'm' && tolower(categoria) == 'p') * 1350 +
		(tolower(marca) == 'm' && tolower(categoria) == 'm') * 2500 +
		(tolower(marca) == 'o' && tolower(categoria) == 'p') * 900 +
		(tolower(marca) == 'o' && tolower(categoria) == 'm') * 3200;
}

int main() {
	int h;
	char marca, categoria; 

	cout << "Ingrese Marca (B: Best; M: Monark; O: Oxford): " ;
	cin >> marca;

	cout << "Ingrese Categoría (P: Paseo; M: Montañera): " ;
	cin >> categoria;

	/*int rPrecio = (tolower(marca) == 'b' && tolower(categoria) == 'p') * 1300 +
				  (tolower(marca) == 'b' && tolower(categoria) == 'm') * 1000 +
				  (tolower(marca) == 'm' && tolower(categoria) == 'p') * 1350 +
				  (tolower(marca) == 'm' && tolower(categoria) == 'm') * 2500 +
				  (tolower(marca) == 'o' && tolower(categoria) == 'p') * 900 +
				  (tolower(marca) == 'o' && tolower(categoria) == 'm') * 3200;*/

	cout << "El Monto a pagar es: " << rPrecio(marca, categoria);

	h = _getch();
	return 0;
}