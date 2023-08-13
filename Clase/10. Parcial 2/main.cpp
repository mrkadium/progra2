///Parcial 2 - Programación II
///Estudiante: Mario Adalberto Rivera Olivo
///Catedrático: Iván O. Alvarado N.

#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include "Cuenta.h"
#define TAM_Cliente 10
#define TAM_Cuenta 10

int menu(){
    int op;
    cout << "MENU DE OPCIONES\n";
    cout << "1. Agregar clientes\n";
    cout << "2. Agregar cuentas\n";
    cout << "3. Hacer abonos\n";
    cout << "4. Mostrar list\n";
    cout << "5. Salir\n";
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
    int op;
    string nom, ape, doc;
    ClientePersonanNatural clinat;
    ClientePersonaJuridica clijur;
    bool retorno;

    cout << "Que tipo de cliente desea agregar?: " << endl;
    cout << "1. Persona Natural" << endl;
    cout << "2. Persona Juridica" << endl;
    cout << "Digite la opcion:";
    cin op;


    if(op = 1){
        cout << "Digite el id de cliente : ";
        cin >> id;
        if (buscarClientes(lst, cc, id) >=0){
            cout << "El cliente ya existe\n";
            retorno = false;
        }
        else{
            cout << "Digite el nombre de cliente : ";
            cin >> nom;
            cout << "Digite el apellido de cliente : ";
            cin >> ape;
            cout << "Digite el numero de DUI: ";
            cin >> doc;
            clinat = ClientePersonaNatural(id, nom, ape, doc);
            lst[cc] = clinat;
            retorno = true;
        }
        return retorno;
    }
    if(op = 2){
        cout << "Digite el id de cliente : ";
        cin >> id;
        if (buscarClientes(lst, cc, id) >=0){
            cout << "El cliente ya existe\n";
            retorno = false;
        }
        else{
            cout << "Digite el nombre de cliente : ";
            cin >> nom;
            cout << "Digite el numero de NIT : ";
            cin >> ape;
            clijur = ClientePersonaJuridica(id, nom, doc);
            lst[cc] = clijur;
            retorno = true;
        }
        return retorno;
    }
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
    ClientePersonaNatural clin;
    ClientePersonaJuridica clij;
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
        cout << "Cuenta numero: " << lst[pos].getCliente().getNumeroCuenta();
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

        void detallesCuenta(Cuenta lst[], int cc)
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
                ///Hacer abonos
                hacerAbonos(listaCuentas, contadorCuenta);
                break;
            case 4:
                ///Mostrar la lista
                mostrarListaClientes(listaClientes, contadorCliente);
                break;
            case 5:
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
