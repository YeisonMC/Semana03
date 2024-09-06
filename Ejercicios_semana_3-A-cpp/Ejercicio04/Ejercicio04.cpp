#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int nMayor(int n1, int n2) {
	return (n1 > n2) * n1 + 
		   (n2 > n1) * n2;
}

int nMenor (int n1, int n2){
	return (n1 > n2) * n2 +
		   (n2 > n1) * n1;
}

int main() {
	int h;

	int n1, n2; 

	 cout << "Ingresar el primer numero: "; 
	 cin >> n1; 

	 cout << "Ingresar el primer numero: "; 
	 cin >> n2;

	 cout << "El numero mayor es: " << nMayor(n1,n2) << endl;
	 cout << "El numero menor es: " << nMenor(n1,n2) << endl;

	h = _getch();
	return 0;
}