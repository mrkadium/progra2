#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED
#define TAM 20
#include "Fecha.h"
#include "Abonos.h"
class Cuenta{
    private:
        int numeroCuenta;
        Cliente cliente;
        Fecha fechaApertura;
        Abonos[10] lstAbonos;
        int contadorAbonos;
        float saldo;
    public:
        Cuenta(int);
        int getNumeroCuenta();
        void setCliente(Cliente);
        Cliente getCliente();
        void setFechaApertura(Fecha f);
        Fecha getFechaApertura();
        void hacerAbonos(float);
        void mostrarAbonos();
        float getSaldo();

};
#endif // CUENTA_H_INCLUDED
