#include "Trabajador.h"
Trabajador::Trabajador(){
    this->Id = 0;
    strcpy(this->Nombres,"");
    strcpy(this->Apellidos,"");
    this->SueldoMensual = 0;
    this->descuentoIsss = 0;
    this->descuentoAfp = 0;
    this->descuentoIsr = 0;
    this->TotalPagar = 0;
}
void Trabajador::setId(int i){
    this->Id = i;
}
int Trabajador::getId(){
    return this->Id;
}
void Trabajador::setNombres(char n[]){
    strcpy(this->Nombres,n);
}
void Trabajador::getNombres(){
    cout << this->Nombres;
}
void Trabajador::setApellidos(char a[]){
    strcpy(this->Apellidos,a);
}
void Trabajador::getApellidos(){
    cout << this->Apellidos;
}
void Trabajador::setFechaNac(Fecha *f){
    this->FechaNac = f;
}
Fecha *Trabajador::getFechaNac(){
    return this->FechaNac;
}
void Trabajador::setSueldoMensual(float sm){
    this->SueldoMensual = sm;
    ///Aplicando descuento
    this->descuentoIsss = sm*0.03;
    this->descuentoAfp = sm*0.0625;
    this->descuentoIsr = sm*0.1;
    this->TotalPagar = sm - (this->descuentoIsss+this->descuentoAfp+this->descuentoIsr);
}
float Trabajador::getSueldoMensual(){
    return this->SueldoMensual;
}
float Trabajador::getDescuentoIsss(){
    return this->descuentoIsss;
}
float Trabajador::getDescuentoAfp(){
    return this->descuentoAfp;
}
float Trabajador::getDescuentoIsr(){
    return this->descuentoIsr;
}
float Trabajador::getTotalPagar(){
    return this->TotalPagar;
}
