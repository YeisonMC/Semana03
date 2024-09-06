#include <iostream> 
#include <conio.h> 
#include <string> 
using namespace std;

void resultado(int aqiNivel, double pm25) {
	(aqiNivel <= 50 && pm25 <= 12.0 && cout << "Bueno. La calidad del aire es satisfactoria y presenta poco o ningun riesgo." << endl) ||
	(aqiNivel <= 100 && pm25 <= 35.4 && cout << "Moderado. Las personas sensibles deben evitar actividades al aire libre ya que pueden experimentar sintomas respiratorios." << endl) ||
	(aqiNivel <= 150 && pm25 <= 55.4 && cout << "Nocivo para grupos sensibles. El publico en general y, en particular, las personas sensibles corren el riesgo de experimentar irritacion y problemas respiratorios." << endl) ||
	(aqiNivel <= 200 && pm25 <= 150.4 && cout << "Nocivo. Mayor probabilidad de efectos adversos y agravamiento del corazon y los pulmones en el publico en general." << endl) ||
	(aqiNivel <= 300 && pm25 <= 250.4 && cout << "Muy nocivo. El publico en general se vera notablemente afectado. Los grupos sensibles deben restringir las actividades al aire libre." << endl) ||
	(aqiNivel > 300 && pm25 > 250.4 && cout << "Peligroso. El publico en general corre un alto riesgo de experimentar fuertes irritaciones y efectos adversos para la salud. Deben evitar actividades al aire libre." << endl);
}

int main() {
	int h, aqiNivel;
	double pm25;

	cout << "Ingrese el AQI Level: ";
	cin >> aqiNivel;

	cout << "Ingrese el PM2.5 (ug/m3): ";
	cin >> pm25;

	resultado(aqiNivel, pm25);

	h = _getch();
	return 0;
}