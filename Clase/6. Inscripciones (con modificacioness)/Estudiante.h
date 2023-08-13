#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

class Estudiante
{
private:

    int codigo;
    string nombre;
    string apellido;

    public:
        Estudiante(){}
        Estudiante(int c, string n, string a)
        {
            this->codigo = c;
            this->nombre = n;
            this->apellido = a;
        }
        void setId(int i)
        {
            this->codigo = i;
        }
        int getId()
        {
            return this->codigo;
        }
        void setNombre(string n )
        {
            this->nombre = n;
        }
        string getNombre()
        {
            return this->nombre;
        }
        void setApellido(string a)
        {
            this->apellido = a;
        }

        string getApellido()
        {
            return this->apellido;
        }


};


#endif // ESTUDIANTE_H_INCLUDED
