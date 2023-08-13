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
        Fecha(int dia = 0, int mes = 0, int anio = 0);
        void mostrarFecha();
        bool esValida();

};


#endif // FECHA_H_INCLUDED
