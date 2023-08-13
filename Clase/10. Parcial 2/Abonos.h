#ifndef ABONOS_H_INCLUDED
#define ABONOS_H_INCLUDED
#include "Fecha.h"

class Abonos{
    private:
        Fecha fechaAbono;
        float montoAbono;
    public:
        Abonos(){
        }
        Abonos(Fecha fa, float m){
            this->fechaAbono = fa;
            this->montoAbono = m;
        }
        void setFechaAbono(Fecha f){
            this->fechaAbono = f;
        }
        Fecha getFechaAbono(){
            return this->fechaAbono;
        }
        void setMonto(float m){
            this->montoAbono = m;
        }
        float getMonto(){
            return this->monto;
        }
};

#endif // ABONOS_H_INCLUDED
