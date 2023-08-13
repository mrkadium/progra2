#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include "Cuenta.h"
#define TAM_Cliente 5
#define TAM_Cuenta 5

int menu(){
    int op;
    cout << "MENU DE OPCIONES\n";
    cout << "1. Agregar clientes\n";
    cout << "2. Agregar cuentas\n";
    cout << "3. Mostrar lista de clientes\n";
    cout << "4. Mostrar lista de cuentas\n";
    cout << "5. Ver detalle de la cuenta\n";
    cout << "6. Hacer abonos\n";
    cout << "7. Salir\n";
    cout << "Digite la opcion : ";
    cin >> op;
    return op;
}
int buscarClientes(Cliente lst[], int cc, int id){
    int pos=-1;
    bool encontrado = false;
    int contador=0;
    while (contador < cc && !encontrado){
        if (lst[contador].getId() == id){
            encontrado = true;
            pos = contador;
        }
        else{
            contador++;
        }
    }
    return pos;
}
bool capturarClientes(Cliente lst[], int cc){
    int id;
    string nom, ape;
    Cliente cli;
    bool retorno;
    cout << "Digite el id de cliente : ";
    cin >> id;
    if (buscarClientes(lst, cc, id) >=0){
        cout << "El cliente ya existe\n";
        retorno = false;
    }
    else{
        cout << "Digite los nombres de cliente : ";
        cin >> nom;
        cout << "Digite los apellidos de cliente : ";
        cin >> ape;
        cli = Cliente(id, nom, ape);
        lst[cc] = cli;
        retorno = true;
    }
    return retorno;
}
void mostrarListaClientes(Cliente lst[], int cc){
    if (cc==0){
        cout << "La lista de clientes esta vacia\n";
    }
    else{
        cout << "Id\t\tNombres\t\tApellidos\n";
        for (int i=0;i<cc; i++){
            cout << lst[i].getId() << "\t\t";
            cout << lst[i].getNombres() << "\t\t";
            cout << lst[i].getApellidos() << "\n";
        }
    }
}
int buscarCuentas(Cuenta lst[], int cc, int nc){
    int pos=-1;
    bool encontrado = false;
    int contador=0;
    while (contador < cc && !encontrado){
        if (lst[contador].getNumeroCuenta() == nc){
            encontrado = true;
            pos = contador;
        }
        else{
            contador++;
        }
    }
    return pos;
}
bool capturaCuentas(Cuenta lstCuenta[], int cCu, Cliente lstCliente[], int cCli){
    int nc;
    int id;
    string dia, mes, anio;
    Cuenta cta;
    Cliente cli;
    Fecha fa;
    bool retorno;
    cout << "Digite el numero de cuenta  : ";
    cin >> nc;
    if (buscarCuentas(lstCuenta, cCu, nc) >=0){
        cout << "La cuenta ya existe\n";
        retorno = false;
    }
    else{
        cout << "Digite el id de cliente : ";
        cin >> id;
        ///Buscar el id del cliente
        int pos = buscarClientes(lstCliente, cCli, id);
        if (pos >= 0){
            ///Se encontro
            cli = lstCliente[pos];
            cout << "Digite la fecha de creacion de la cuenta D/M/A : ";
            cin >> dia;
            cin >> mes;
            cin >> anio;
            fa = Fecha(dia, mes, anio);
            cta = Cuenta(nc);
            cta.setCliente(cli);
            cta.setFechaApertura(fa);
            lstCuenta[cCu] = cta;
            retorno = true;
        }
        else{
            ///Tarea1 capturar el cliente
            cout << "El cliente no existe\n";
            retorno = false;
        }
    }
    return retorno;
}
void mostrarListaCuentas(Cuenta lst[], int cc){
    if (cc==0){
        cout << "La lista de cuentas esta vacia\n";
    }
    else{
        cout << "Nc\tNombres\tApellidos\tFechaApertura\tSaldo\n";
        for (int i=0;i<cc; i++){
            cout << lst[i].getNumeroCuenta() << "\t";
            cout << lst[i].getCliente().getNombres() << " ";
            cout << lst[i].getCliente().getApellidos() << "\t";
            cout << lst[i].getFechaApertura().getFecha() << "\t";
            cout << lst[i].getSaldo() << "\n";
        }
    }
}
void detallesCuenta(Cuenta lst[], int cc){
    int nc;
    cout << "Digite el numero de cuenta : ";
    cin >> nc;
    int pos = buscarCuentas(lst, cc, nc);
    if (pos>=0){
        ///La cuenta se encontro
        cout << "Cliente " << lst[pos].getCliente().getNombres();
        cout << " " << lst[pos].getCliente().getApellidos() << endl;
        cout << "Fecha de apertura : " << lst[pos].getFechaApertura().getFecha() << endl;
        cout << "Saldo " << lst[pos].getSaldo() << endl;
        cout << "Abonos \n";
        cout << lst[pos].getAbonos() << endl;
    }
    else{
        cout << "La cuenta no se encontro\n";
    }
}
void hacerAbonos(Cuenta lst[], int cc){
    int nc;
    float monto;
    string d, m, a;
    Fecha fa;
    Abonos ab;
    cout << "Digite el numero de cuenta : ";
    cin >> nc;
    int pos = buscarCuentas(lst, cc, nc);
    if (pos>=0){
        ///Solicitar el abono
        cout << "Digite el monto : ";
        cin >> monto;
        cout << "Digite la fecha D/M/A : ";
        cin >> d;
        cin >> m;
        cin >> a;
        fa = Fecha(d,m,a);
        ab = Abonos(fa, monto);
        lst[pos].hacerAbonos(ab);
    }
    else{
        cout << "La cuenta no se encontro\n";
    }
}
int main(){
    Cliente listaClientes[TAM_Cliente];
    Cuenta listaCuentas[TAM_Cuenta];
    int contadorCliente=0;
    int contadorCuenta=0;
    int opc;
    do{
        system("cls");
        opc = menu();
        switch (opc){
            case 1:
                ///Captura de clientes;
                if (capturarClientes(listaClientes, contadorCliente))
                    contadorCliente++;
                break;
            case 2:
                ///Captura de cuentas;
                if (capturaCuentas(listaCuentas, contadorCuenta, listaClientes, contadorCliente))
                    contadorCuenta++;
                break;
            case 3:
                ///Mostrar la lista de clientes
                mostrarListaClientes(listaClientes, contadorCliente);
                break;
            case 4:
                ///Mostrar la lista de cuentas
                mostrarListaCuentas(listaCuentas, contadorCuenta);
                break;
            case 5:
                ///Ver detalles de la cuenta
                detallesCuenta(listaCuentas, contadorCuenta);
                break;
            case 6:
                ///Hacer abonos
                hacerAbonos(listaCuentas, contadorCuenta);
                break;
            case 7:
                ///Saliendo del programa
                cout << "Saliendo del programa\n";
                break;
            default:
                ///Error
                cout << "Error, opcion no definida\n";
        }
        system("pause");
    }while (opc!=7);
    return 0;
}
