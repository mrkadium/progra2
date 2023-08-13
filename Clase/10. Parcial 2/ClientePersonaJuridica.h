#ifndef CLIENTEPERSONAJURIDICA_H_INCLUDED
#define CLIENTEPERSONAJURIDICA_H_INCLUDED
#include "Cliente.h"

class ClientePersonaJuridica : public Cliente{
    public:
        ClientePersonaJuridica();
        ClientePersonaJuridica(int i, string n, string d): Cliente(int i, string no, string ape){
            this->Id = i;
            this->Nombre = n;
            this->Documento = d;
        }
        void setNumeroNit(string d){
            this->Documento = d;
        }
        string getNumeroNit(){
            return this->Documento;
        }
        getTipoCliente(){
        };
};

#endif // CLIENTEPERSONAJURIDICA_H_INCLUDED
