#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#define TAM_Mat 5
class Inscripcion{
    private:
        int idInscripcion;
        string cicloAcademico;
        Estudiante estudiante;
        Materia materiasInscritas[TAM_Mat];
        int contadorMaterias;
    public:
        Inscripcion(){
        }
        Inscripcion(int idi){
            this->idInscripcion = idi;
            this->contadorMaterias = 0;
        }
        void setIdInscripcion(int idi){
            this->idInscripcion = idi;
        }
        int getIdInscripcion(){
            return this->idInscripcion;
        }
        void setCicloAcademico(string ca){
            this->cicloAcademico = ca;
        }
        string getCicloAcademico(){
            return this->cicloAcademico;
        }
        void setEstudiante(Estudiante est){
            this->estudiante = est;
        }
        Estudiante getEstudiante(){
            return this->estudiante;
        }
        void agregarMaterias(Materia ma){
            string r;
            if(this->contadorMaterias < TAM_Mat){
                this->materiasInscritas[this->contadorMaterias] = ma;
                this->contadorMaterias++;
                r = "Materias agregadas :D";
            }else{
                r = "La lista de Materias está llena";
            }
        }
        void mostrarMaterias(){
            string r;
            if (this->contadorMaterias==0){
                r = "No hay materias inscritas";
            }
            else{
                r = "Materias: ";
                for (int i=0;i<this->contadorMaterias;i++){
                    r += this->materiasInscritas[i].getMateria();
                }
            }
        }
        int getContadorMaterias(){
            return this->contadorMaterias;
        }
};


#endif // INSCRIPCION_H_INCLUDED
