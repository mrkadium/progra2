#ifndef ABONOS_H_INCLUDED
#define ABONOS_H_INCLUDED
#include "Fecha.h"
class Abonos{
    private:
        Fecha fechaAbono;
        float monto;
    public:
        Abonos(){
        }
        Abonos(Fecha fa, float m){
            this->fechaAbono = fa;
            this->monto = m;
        }
        float getMonto(){
            return this->monto;
        }
        Fecha getFecha(){
            return this->fechaAbono;
        }
};
#endif // ABONOS_H_INCLUDED
