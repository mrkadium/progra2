#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED
class Materia
{
private:

    int idMateria;
    string materia;

    public:
        Materia(){}
        Materia(int i, string m)
        {
            this->idMateria =i;
            this->materia = m;
        }
        void setIdMateia(int i )
        {
            this->idMateria = i;
        }
        int getIdMateria()
        {
            return this->idMateria;
        }
        void setMateria(string m)
        {
            this->materia = m;
        }
        string getMateria()
        {
            return this->materia;
        }
};



#endif // MATERIA_H_INCLUDED
