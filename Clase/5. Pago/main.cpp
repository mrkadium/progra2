#include <iostream>
#define TAM 10
using namespace std;
#include "Total.h"

TotalPago total;
int main()
{
    float s = 0;
    float sueldo = 0;
    char op;
    char nombre[TAM], apellido[TAM];

    cout << "CALCULO DE LIQUIDO" << endl << endl;

    do{
        cout << "\nIntroduzca su primer nombre: ";
        cin >> nombre;
        cout << "Introduzca su primer apellido: ";
        cin >> apellido;
        cout << "Introduzca el sueldo mensual: ";
        cin >> sueldo;

        cout << "\n**** SUS DATOS SON: ****" << endl;

        total.setNomApe(nombre, apellido);
        total.getNomApe();
        total.setSueldoMensual(sueldo);
        total.getSueldoMensual();

        cout << "\n**** SUS DESCUENTOS SON: ****" << endl;
        total.getDescuentoAfp();
        total.getDescuentoIsr();
        total.getDescuentoIsss();
        total.getTotalPagar();


        cout << "Desea calcular otro liquido? ";
        cin >> op;
    }while(op == 's' || op=='S');
    return 0;
}
