#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string.h>
class Cliente{
    private:
        int idCliente;
        string Nombres;
        string Apellidos;
    public:
        Cliente(){
        }
        Cliente(int i, string n, string a){
            this->idCliente = i;
            this->Nombres = n;
            this->Apellidos = a;
        }
        void setId(int i){
            this->idCliente = i;
        }
        int getId(){
            return this->idCliente;
        }
        void setNombres(string  n){
            this->Nombres = n;
        }
        string getNombres(){
            return this->Nombres;
        }
        void setApellidos(string  a){
            this->Apellidos = a;
        }
        string getApellidos(){
            return this->Apellidos;
        }
};
#endif // CLIENTE_H_INCLUDED
