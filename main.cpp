#include <iostream>

using namespace std;

int main() {
	float cantidad;
	int horas;
	int minutos;
	int segundos;
        cout << "ingrese tiempo en segundos" << endl;
	cin >> cantidad;
	horas = (cantidad/3600);
	cantidad = cantidad/3600;
	minutos = ((cantidad * horas * 3600) / 60) ;
    segundos= cantidad * (horas * 3600 + minutos * 60);
	cout << horas << " Horas " << minutos << " Minutos " << segundos << " Segundos " << endl;
	return 0;
}

