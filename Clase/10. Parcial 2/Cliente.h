#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "ClientePersonaJuridica.h"
#include "ClientePersonaNatural.h"

class Cliente{
    protected:
        int Id;
        string Nombre;
        string Apellido;
        string Documento;
    public:
        Cliente();
        Cliente(int i, string no, string ape){
            this->Id = i;
            this->Nombre = no;
            this->Apellido = ape;
        }
        void setId(int i){
            this->Id = i;
        }
        int getId(){
            return this->Id;
        }
        void setNombre(string n){
            this->Nombre = n;
        }
        string getNombre(){
            return this->Nombre;
        }
        void setApellido(string a){
            this->Apellido = a;
        }
        string getApellido(){
            return this->Apellido;
        }
        int getTipoCliente(){
        }
};

#endif // CLIENTE_H_INCLUDED
