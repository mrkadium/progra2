#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define TAM 10
#include "Fecha.h"
#include <string.h>

class Persona{
    private:
        char Nombre[TAM];
        char Apellido[TAM];
        Fecha FechaNac;
    public:
        void setNombre(char n[TAM]){
        }
        void getNombre(){
        }
        void setApellido(char n[TAM]){
        }
        void getApellido(){
        }
        void setFechaNac(char n[TAM]){
        }
        void getFechaNac(){
        }
};


#endif // PERSONA_H_INCLUDED
