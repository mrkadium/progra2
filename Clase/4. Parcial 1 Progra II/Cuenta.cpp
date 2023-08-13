#include "Cuenta.h"
#include "Abonos.h"
#include "string.h"
Cuenta::Cuenta(int nc){
    this->numeroCuenta = nc;
}
int Cuenta::getNumeroCuenta(){
    return this->numeroCuenta;
}
void Cuenta::setCliente(Cliente cl){
    this->cliente = cl;
}
Cliente Cuenta::getCliente(){
    return this->cliente;
}
void Cuenta::setFechaApertura(Fecha f){
    this->fechaApertura = f;
}
Fecha Cuenta::getFechaApertura(){
    return this->fechaApertura;
}
void Cuenta::hacerAbonos(Abonos ab){

}
void Cuenta::mostrarAbonos(){
    cout << "Sus abonos son: " << endl;
    //for(i=0; i<)
}
float Cuenta::getSaldo(){
    return this->saldo;
}

