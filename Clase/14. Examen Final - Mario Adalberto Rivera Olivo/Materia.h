#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

class Materia{
    private:
        int idMateria;
        string materia;
    public:
        Materia(){
        }
        Materia(int id, string m){
            this->idMateria = id;
            this->materia = m;
        }
        void setIdMateria(int id){
            this->idMateria = id;
        }
        int getIdMateria(){
            return this->idMateria;
        }
        void setMateria(string m){
            this->materia = m;
        }
        string getMateria(){
            return this->materia;
        }
};


#endif // MATERIA_H_INCLUDED
