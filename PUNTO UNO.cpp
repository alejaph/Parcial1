#include <iostream>

using namespace std;
int main() {
        //Salario y tarifa extra de un empleado.
        double emp;
	double horasextras;
	double horastrabajadas;
	double salario;
	double tarifaextra;
	double tarifa;
	cout << "Ingrese nombre del empleado" << endl;
	cin >> emp;
	cout << "Ingrese numero de horas trabajadas" << endl;
	cin>>horastrabajadas;
	cout<< "Ingrese tarifa por hora" << endl;
    cin >> tarifa;
	if (horastrabajadas>40) {
		salario = horastrabajadas*tarifa;
	} else {
		tarifaextra = tarifa*1.50;
		horasextras = horastrabajadas-40;
		salario = tarifaextra*horasextras+horastrabajadas*tarifa;
	}
	cout << "Empleado: " << emp << " Su salario es:    " << salario << " Su tarifa por hora es:   " << tarifa << " Su tarifa extra es: " << tarifaextra<<  endl;
	return 0;
}

