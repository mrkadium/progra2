#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <string.h>

class Estudiante{
    private:
        int Codigo;
        string Nombre;
        string Apellido;
    public:
        Estudiante(){
        }
        Estudiante(int c, string n, string a){
            this->Codigo = c;
            this->Nombre = n;
            this->Apellido = a;
        }
        void setId(int c){
            this->Codigo = c;
        }
        int getId(){
            return this->Codigo;
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
};


#endif // ESTUDIANTE_H_INCLUDED
