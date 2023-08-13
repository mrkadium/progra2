#ifndef TELEFONO_H_INCLUDED
#define TELEFONO_H_INCLUDED
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

void hacerRecarga(){
    ofstream saldo, saldoAux, datos, datosAux;
    ifstream leerSaldo, leerDatos;
    leerSaldo.open("Saldo.txt", ios::in);
    leerDatos.open("Datos.txt", ios::in);
    saldo.open("Saldo.txt", ios::out | ios::app);
    saldoAux.open("AuxSaldo.txt", ios::out | ios::app);
    datos.open("Datos.txt", ios::out | ios::app);
    datosAux.open("AuxDatos.txt", ios::out | ios::app);
    float saldoValor= 0, saldoActual = 0;
    int llamadas = 0, mensajes = 0, recargas = 0;
    char op = 'n';
    ///////////////////////////////////////////////////////////////////////////////////////////
    if(leerSaldo.is_open() && leerDatos.is_open()){
        leerSaldo >> saldoActual;
        leerDatos >> llamadas >> mensajes >> recargas;
    }
    while(op != 's' || op != 's'){
        cout << "Ingrese el monto que desea recargar: ";
        cin >> saldoValor;
        cout << "\nEs " << saldoValor << " correcto?(s/n) : ";
        cin >> op;
    }
    saldoAux << (saldoValor+saldoActual);
    datosAux << llamadas << endl << mensajes << endl << (recargas + 1);
//    while(getline(leerDatos, llamadas) && getline(leerDatos, mensajes) && getline(leerDatos, recargas)){
//        datosAux << llamadas << endl << mensajes << endl << (recargas+1);
//    }
    cout << "Recarga realizada :)" << endl << endl;
    ///////////////////////////////////////////////////////////////////////////////////////////
    saldo.close();
    saldoAux.close();
    leerSaldo.close();
    datos.close();
    datosAux.close();
    leerDatos.close();
    remove("Saldo.txt");
    rename("AuxSaldo.txt", "Saldo.txt");
    remove("Datos.txt");
    rename("AuxDatos.txt", "Datos.txt");
}

void consultarSaldo(){
    ifstream leerSaldo;
    leerSaldo.open("Saldo.txt", ios::in);
    float saldoValor;
    ///////////////////////////////////////////////////////////////////////////////////////////
    if(leerSaldo.is_open()){
        leerSaldo >> saldoValor;
        cout << "Su saldo es: $" << saldoValor << endl << endl;
    }else{
        cout << "Usted no posee saldo :(" << endl << endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////
    leerSaldo.close();
}

void hacerLlamada(){
    ofstream saldo, saldoAux, datos, datosAux;
    ifstream leerSaldo, leerDatos;
    leerSaldo.open("Saldo.txt", ios::in);
    leerDatos.open("Datos.txt", ios::in);
    saldo.open("Saldo.txt", ios::out | ios::app);
    saldoAux.open("AuxSaldo.txt", ios::out | ios::app);
    datos.open("Datos.txt", ios::out | ios::app);
    datosAux.open("AuxDatos.txt", ios::out | ios::app);
    float saldoActual = 0;
    char op = 'n';
    int llamadas = 0, mensajes = 0, recargas = 0;
    ///////////////////////////////////////////////////////////////////////////////////////////
    if(leerSaldo.is_open()){
        leerSaldo >> saldoActual;
        if(saldoActual >= 0.50){ ///0.50 es el precio por llamada
            cout << "Haciendo llamada..." << endl << endl;
            saldoAux << (saldoActual-0.50); ///se resta la tarifa al saldo actual y se ingresa
            cout << "Llamada realizada :)" << endl << endl;
//            while(getline(leerDatos, llamadas) && getline(leerDatos, mensajes) && getline(leerDatos, recargas)){
//                datosAux << (llamadas + 1) << endl << mensajes << endl << recargas;
//            }
            leerDatos >> llamadas >> mensajes >> recargas;
            datosAux << (llamadas+1) << endl << mensajes << endl << recargas;
        }else{
            cout << "No posee suficiente saldo :(" << endl;
            saldoAux << saldoActual;
//            while(getline(leerDatos, llamadas) && getline(leerDatos, mensajes) && getline(leerDatos, recargas)){
//                datosAux << llamadas << endl << mensajes << endl << recargas;
//            }
            leerDatos >> llamadas >> mensajes >> recargas;
            datosAux << llamadas << endl << mensajes << endl << recargas;
        }
    }else{
        cout << "No posee saldo :(" << endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////
    saldo.close();
    saldoAux.close();
    leerSaldo.close();
    datos.close();
    datosAux.close();
    leerDatos.close();
    remove("Saldo.txt");
    rename("AuxSaldo.txt", "Saldo.txt");
    remove("Datos.txt");
    rename("AuxDatos.txt", "Datos.txt");
}
void enviarMensaje(){
    ofstream saldo, saldoAux, datos, datosAux;
    ifstream leerSaldo, leerDatos;
    leerSaldo.open("Saldo.txt", ios::in);
    leerDatos.open("Datos.txt", ios::in);
    saldo.open("Saldo.txt", ios::out | ios::app);
    saldoAux.open("AuxSaldo.txt", ios::out | ios::app);
    datos.open("Datos.txt", ios::out | ios::app);
    datosAux.open("AuxDatos.txt", ios::out | ios::app);
    float saldoActual = 0;
    char op = 'n';
    int llamadas = 0, mensajes = 0, recargas = 0;
    ///////////////////////////////////////////////////////////////////////////////////////////
    if(leerSaldo.is_open()){
        leerSaldo >> saldoActual;
        if(saldoActual >= 0.20){ ///0.20 por llamada
            cout << "Enviando mensaje..." << endl << endl;
            saldoAux << (saldoActual-0.20); ///se resta la tarifa al saldo actual y se ingresa
            cout << "Mensaje enviado :)" << endl << endl;
//            while(getline(leerDatos, llamadas) && getline(leerDatos, mensajes) && getline(leerDatos, recargas)){
//                datosAux << (llamadas + 1) << endl << mensajes << endl << recargas;
//            }
            leerDatos >> llamadas >> mensajes >> recargas;
            datosAux << llamadas << endl << (mensajes + 1) << endl << recargas;
        }else{
            cout << "No posee suficiente saldo :(" << endl;
            saldoAux << saldoActual;
//            while(getline(leerDatos, llamadas) && getline(leerDatos, mensajes) && getline(leerDatos, recargas)){
//                datosAux << llamadas << endl << mensajes << endl << recargas;
//            }
            leerDatos >> llamadas >> mensajes >> recargas;
            datosAux << llamadas << endl << mensajes << endl << recargas;
        }
    }else{
        cout << "No posee saldo :(" << endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////
    saldo.close();
    saldoAux.close();
    leerSaldo.close();
    datos.close();
    datosAux.close();
    leerDatos.close();
    remove("Saldo.txt");
    rename("AuxSaldo.txt", "Saldo.txt");
    remove("Datos.txt");
    rename("AuxDatos.txt", "Datos.txt");
}
void consultarDatos(){
    ifstream leerSaldo, leerDatos;
    leerDatos.open("Datos.txt", ios::in);
    leerSaldo.open("Saldo.txt", ios::in);
    float saldo;
    string llamadas, mensajes, recargas;

    if(leerSaldo.is_open()){
        leerSaldo >> saldo;
        cout << "Saldo: " << saldo << endl;
        while(getline(leerDatos, llamadas) && getline(leerDatos, mensajes) && getline(leerDatos, recargas)){
            cout << "Llamadas realizadas: " << llamadas << endl;
            cout << "Mensajes enviados: " << mensajes << endl;
            cout << "Recargas realizadas: " << recargas << endl << endl;
        }
    }else{
        cout << "No hay datos :(" << endl << endl;
    }

    leerDatos.close();
    leerSaldo.close();
}


#endif // TELEFONO_H_INCLUDED
