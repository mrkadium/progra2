#include "Abonos.h"
#include "Fecha.h"
Abonos::Abonos(Fecha f, float a){
    this->fechaAbono = f;
    this->montoAbono = a;
}
void Abonos::setFecha(Fecha f){
    this->fechaAbono = f;
}
Fecha Abonos::getFecha(){
    return this->fechaAbono;
}
void Abonos::setMonto(float m){
    this->montoAbono = m;
}
float Abonos::getMonto(){
    return this->montoAbono;
}
