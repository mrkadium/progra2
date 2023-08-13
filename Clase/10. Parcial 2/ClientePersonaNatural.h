#ifndef CLIENTEPERSONANATURAL_H_INCLUDED
#define CLIENTEPERSONANATURAL_H_INCLUDED
#include "Cliente.h"

class ClientePersonaNatural : public Cliente{
    public:
        ClientePersonaNatural();
        ClientePersonaNatural(int i, string n, string a, string d){
            this->Id = i;
            this->Nombre = n;
            this->Apellido = a;
            this->Documento = d;
        }
        void setNumeroDui(string d){
            this->Documento = d;
        }
        string getNumeroDui(){
            return this->Documento;
        }
        int getTipoCliente(){
        }
};

#endif // CLIENTEPERSONANATURAL_H_INCLUDED
