#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#define TAMM 5
#include "Materia.h"
#include "Estudiante.h"

class Inscripcion
{
    private:
    int idInscripcion;
    string cicloActual;
    Estudiante *estudiante;
    Materia *materiasInscritas[TAMM];
    int contadorMaterias=0;

    public:
        Inscripcion(){}
        Inscripcion(int i)
        {
            this->idInscripcion = 0;
            this->cicloActual = "";
            this->contadorMaterias = 0;

        }

        void setIdInscripcion(int j)
        {
            this->idInscripcion = j;
        }
        int getIdInscripcion()
        {
            return this->idInscripcion;
        }
        void setCicloAcademico(string ciclo)
        {
            this->cicloActual = ciclo;
        }
        string getCicloAcademico()
        {
            return this->cicloActual;
        }
        void setEstudiante(Estudiante *e)
        {
            this->estudiante = e;
        }
        Estudiante *getEstudiante()
        {
            return this->estudiante;
        }
        void agregarMaterias(Materia *m)
        {
   if (this->contadorMaterias<=5)
            {
            this->materiasInscritas[this->contadorMaterias] = m;
            this->contadorMaterias++;
            }
            else
            {
            cout <<"la lista de materias esta llena"<<endl;
            }

        }
        void mostrarMateias()
        {
            for(int i = 0; i<this->contadorMaterias;i++)
            {
            cout <<"materias: "<<this->materiasInscritas[i]<<endl;
            Materia **m=this->materiasInscritas;
            cout<<m<<endl;

            }

        }
        int getContadorMateria()
        {
            return this->contadorMaterias;
        }

};


#endif // INSCRIPCION_H_INCLUDED
