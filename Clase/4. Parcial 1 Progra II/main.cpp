//Estudiante: Mario Adalberto Rivera Olivo
//Grupo 07
//Catedrático: Iván Alvarado

#include <iostream>
using namespace std;
#include "Cuenta.h"
#include <stdlib.h>
#define TAM 20
int contador = 0;
void menu(){
    cout << "***** MENU DE OPCIONS *****" << endl;
    cout << "1. Agregar cuenta" << endl;
    cout << "2. Hacer abonos" << endl;
    cout << "3. Mostrar abonos" << endl;
    cout << "4. Salir" << endl;
}
int main()
{
    Cuenta datos;
    int opc = 0;
    int numeroCuenta = 0;
    int auxNumCuenta;
    float abono;
    float retiro;
    int d, m, a;
    char nombre[TAM];
    menu();
    cin >> opc;

    do{
        system("cls");
        switch(opc){
            case 1:
                if(contador < 10){
                    cout << "Ingrese el nombre: ";
                    cin >> nombre;
                    cout << "Ingrese el numero de cuenta: ";
                    cin >> numeroCuenta;
                    cout << "Ingrese la fecha:" << endl;
                    cout << "Dia: ";
                    cin >> d;
                    cout << "Mes: ";
                    cin >> m;
                    cout << "Anio: ";
                    cin >> a;
                    Fecha *f = new fechaApertura(d, m, a);
                    datos[contador].Cuenta(numeroCuenta, nombre);
                    contador++;
                }else{ cout << "La lista está llena" << endl;
                }
            break;
            case 2:
                cout << "Digite su numero de cuenta: ";
                cin >> auxNumCuenta;
                for(int i=0; i<=contador; i++){
                    if(auxNumCuenta == datos[i].getNumeroCuenta()){
                        cout << "Digite el monto a abonar: ";
                        cin >> abono;
                        datos.hacerAbonos(abono);
                        cout << "Su nombre es: " << datos[i].mostrarNombreCliente() << endl;
                        cout << "Numero de cuenta: " << datos[i].getNumeroCuenta() << endl;
                        cout << "Fecha de apertura: " << datos[i].getFechaApertura() << endl;
                        cout << "Su saldo es: " << datos[i].getSaldo() << endl;
                    }else{
                        cout << "No se encontró su numero de cuenta";
                    }
                }
            break;
            case 3:
                cout << "Digite su numero de cuenta: ";
                cin >> auxNumCuenta;
                for(int i=0; i<=contador; i++){
                    if(auxNumCuenta == datos[i].getNumeroCuenta()){
                        cout << "Digite el monto a abonar: ";
                        cin >> retiro;
                        datos.hacerRetiro(retiro);
                        cout << "Su nombre es: " << datos[i].mostrarNombreCliente() << endl;
                        cout << "Numero de cuenta: " << datos[i].getNumeroCuenta() << endl;
                        cout << "Fecha de apertura: " << datos[i].getFechaApertura() << endl;
                        cout << "Su saldo es: " << datos[i].getSaldo() << endl;
                    }else{
                        cout << "No se encontró su numero de cuenta";
                    }
                }
            break;
            case 4:
                for(int i=0; i<=contador; i++){
                    cout << "Nombre: " << datos[i].mostrarNombreCliente() << endl;
                    cout << "Numero de cuenta: " << datos[i].getNumeroCuenta() << endl;
                    cout << "Fecha de apertura: " << datos[i].getFechaApertura() << endl;
                    cout << "Saldo: " << datos[i].getSaldo() << endl << endl;
                }

        }
    system("pause");
    }while(opc!=5);
    cout << "Gracias =)" << endl;
    return 0;
}
