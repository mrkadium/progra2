#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        void setFecha(int d, int m, int a){
            this->dia = d; //this es el puntero que refiere a la clase usada, en este caso Fecha
            this->mes = m;
            this->anio = a;
        }
        void getFecha(){
            cout << this->dia << "/" << this->mes << "/" << this->anio;
        }
        bool validarFecha(){
            return true;
        }
};


#endif // FECHA_H_INCLUDED
