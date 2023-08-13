#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#define TAM 10
#include <string.h>
#include "Fecha.h"
class Trabajador{
    private:
        int Id;
        char Nombres[TAM];
        char Apellidos[TAM];
        Fecha *FechaNac;
        float SueldoMensual;
        float descuentoIsss;
        float descuentoAfp;
        float descuentoIsr;
        float TotalPagar;
    public:
        Trabajador();
        void setId(int i);
        int getId();
        void setNombres(char n[]);
        void getNombres();
        void setApellidos(char a[]);
        void getApellidos();
        void setFechaNac(Fecha *f);
        Fecha *getFechaNac();
        void setSueldoMensual(float sm);
        float getSueldoMensual();
        float getDescuentoIsss();
        float getDescuentoAfp();
        float getDescuentoIsr();
        float getTotalPagar();
};


#endif // TRABAJADOR_H_INCLUDED
