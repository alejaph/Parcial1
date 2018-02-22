#include <iostream>

using namespace std;

int main(){
   //mediador de consumo electrico
        float consumo=0, total=0;
        cout<< " Ingrese su consumo: ";
        cin>> consumo;
        if(consumo<8000)
           cout << "Consumo medio " ;
        else
            cout << "Alto consumo de energía";
            return 0;


}

