#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>
using namespace std;
class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha(int d=0, int m=0, int a=0);
        void mostrarFecha();
        bool esValida();
};


#endif // FECHA_H_INCLUDED
