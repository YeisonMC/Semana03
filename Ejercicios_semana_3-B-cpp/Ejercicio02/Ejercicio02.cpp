#include <iostream> 
#include <conio.h> 
#include <string> 
using namespace std;


int nMayor(int n1, int n2, int n3) {
	return (n1 > n2 && n1 > n3) * n1 +
			(n2 > n1 && n2 > n3) * n2 +
			(n3 > n1 && n3 > n2) * n3;
} 

int nMenor(int n1, int n2, int n3) {
	return (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
}

int nPromedio(int n1, int n2, int n3) {
	return n1 + n2 + n3 - nMayor(n1,n2,n3) - nMenor(n1, n2, n3);
}

int main() {
	int h;
	long long n;

	cout << "Ingresa un numero de 12 digitos: ";
	cin >> n;
		//123456789123; 

	int p = (n / 100000000);
	int r = (n / 10000) % 10000;
	int c = (n / 1) % 10000;

	//cout << n << endl;

	cout << "P es: " << p  << endl; 
	cout << "R es: " << r << endl; 
	cout << "C es: " << c  << endl; 
	cout << "Mayor: " << nMayor(p, r, c) << endl;
	cout << "Menor: " << nMenor(p,r,c) << endl; 
	cout << "Intermedio: " << nPromedio(p,r,c) << endl;

	h = _getch();
	return 0;
}