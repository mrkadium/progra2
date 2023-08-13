#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define TAM 10
#include <string.h>
class Persona{
    private:
        int Id;
        char Nombres[TAM];
        char Apellidos[TAM];
    public:
        Persona(int i, char n[], char a[]);
        void setId(int i);
        int getId();
        void setNombres(char n[]);
        void getNombres();
        void setApellidos(char a[]);
        void getApellidos();
};
#endif // PERSONA_H_INCLUDED
