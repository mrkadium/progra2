#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#define TAM 10

class Empleado{

    private:
        char nombre[TAM];
        char apellido[TAM];
        char direccion[TAM];
        char fecha[TAM];
        char cargo[TAM];
        float valorHora;
        int ventasRealizadas;
        float sueldo;

    public:
        void setDatos(char n[], char a[], char d[], char f[], char c[], float v){
            strcpy(this->nombre, n);
            strcpy(this->apellido, a);
            strcpy(this->direccion, d);
            strcpy(this->fecha, f);
            strcpy(this->cargo, c);
            this->valorHora = v;
            this->ventasRealizadas = 0;
            this->sueldo = 0;
        }
        void mostrarNombre(){
            cout << "Nombre: " << this->nombre << " " << this->apellido << endl;
        }
        void mostrarDireccion(){
            cout << "Direccion: " << this->direccion << endl;
        }
        void mostrarFecha(){
            cout << "Fecha: " << this->fecha << endl;
        }
        void mostrarCargo(){
            cout << "Cargo: " << this->cargo << endl;
        }
        void setValorHora(float v){
            valorHora = v;
        }
        float getValorHora(){
            cout << "Valor hora: " << this->valorHora << endl;
        }
        void realizarVenta(){
            cout << "Se ha realizado una venta" << endl;
            this->ventasRealizadas++;

        }
        float getSueldo(){
            return this->valorHora*this->ventasRealizadas;

        }
        int getVentasRealizadas(){
            return this->ventasRealizadas;
        }


};

#endif // EMPLEADO_H_INCLUDED
