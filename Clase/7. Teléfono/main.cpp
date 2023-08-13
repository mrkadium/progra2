#include <iostream>
#include "Telefono.h"
using namespace std;

int menu(){
    int opc;
    cout<<"*****MENU DE OPCIONES*****";
    cout<<"\n\n1. HACER LLAMADAS";
    cout<<"\n2. ENVIAR SMS";
    cout<<"\n3. CONSULTAR SALDO";
    cout<<"\n4. CONSULTAR DATOS";
    cout<<"\n5. HACER RECARGAS";
    cout<<"\n6. SALIR";
    cout<<"\n\nDIGITE LA OPCION: ";
    cin >> opc;
    return opc;
}

int main(){
    int op;
    do{
        system("cls");
        op = menu();
        system("cls");
        switch(op){
            case 1: cout << "Hacer llamada" << endl << endl;
            hacerLlamada();
            break;
            case 2: cout<< "Enviar mensaje" << endl << endl;
            enviarMensaje();
            break;
            case 3: cout<< "Consultar saldo" << endl << endl;
            consultarSaldo();
            break;
            case 4: cout<< "Consultar datos" << endl << endl;
            consultarDatos();
            break;
            case 5: cout<< "Hacer recarga" << endl << endl;
            hacerRecarga();
            break;
            case 6: cout<< "Saliendo..." << endl << endl;
            break;
            default: cout << "\aError :(" << endl << endl;
            break;
        }
        system("pause");
    }while(op != 6);

    return 0;
}

