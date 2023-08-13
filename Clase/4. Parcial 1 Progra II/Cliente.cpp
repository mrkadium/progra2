#include "Cliente.h"

Cliente::Cliente(int id, char n[], char ap[]){
    this->idCliente = id;
    strcpy(this->nombres, n);
    strcpy(this->apellidos, ap);
}
int Cliente::getId(){
    return this->idCliente;
}
void Cliente::mostrarNombre(){
    cout << this->nombres;
}
void Cliente::mostrarApellido(){
    cout << this->apellidos;
}
