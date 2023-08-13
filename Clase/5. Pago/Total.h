#ifndef TOTAL_H_INCLUDED
#define TOTAL_H_INCLUDED
#define TAM 10
#include <string.h>

class TotalPago{
    private:
        char nombre[TAM];
        char apellido[TAM];
        float sueldoMensual;
        float descuentoIsss;
        float descuentoAfp;
        float descuentoIsr;
        float totalPagar;

    public:
        void setNomApe(char n[], char a[]){
            strcpy(this->nombre, n);
            strcpy(this->apellido, a);
        }
        void getNomApe(){
            cout<<"Nombre: " << this->nombre << " " << this->apellido << endl;
        }
        void setSueldoMensual(float s){
            this->sueldoMensual = s;
        }
        void getSueldoMensual(){
            cout << "Sueldo Mensual: $" << this->sueldoMensual << endl;
        }
        void getDescuentoIsss(){
            // 3%
            this->descuentoIsss = this->sueldoMensual*0.03;
            cout << "Descuento ISSS: $" << this->descuentoIsss << endl;
        }
        void getDescuentoAfp(){
            // 6.25%
            this->descuentoAfp = this->sueldoMensual*0.00625;
            cout << "Descuento AFP: $" << this->descuentoAfp << endl;
        }
        void getDescuentoIsr(){
            //if sueldo 0.01 <= 472 no hay descuento
            //if sueldo 472.01 <= 895.24 multiplicar (sueldo - 472) por 0.1 y sumarle 17.67
            //if sueldo 895.25 <= 2038.10 multiplicar (sueldo - 895.24) por 0.2 y sumarle 60
            //if sueldo>2038.10 multiplicar (sueldo - 2038.10) por 0.3 y sumarle 288.57
            if(this->sueldoMensual <= 472.00){
                cout << "Descuento Isr: $0" << endl;
            }
            if(this->sueldoMensual>472.00 && this->sueldoMensual<895.25){
                this->descuentoIsr = (this->sueldoMensual - 472.00)*0.1 + 17.67;
                cout << "Descuento Isr: $" << this->descuentoIsr << endl;
            }
            if(this->sueldoMensual>895.24 && this->sueldoMensual<2038.11){
                this->descuentoIsr = (this->sueldoMensual - 895.24)*0.2 + 60;
                cout << "Descuento Isr: $" << this->descuentoIsr << endl;
            }
            if(this->sueldoMensual>2038.10){
                this->descuentoIsr = (this->sueldoMensual - 2038.10)*0.3 + 288.57;
                cout << "Descuento Isr: $" << this->descuentoIsr << endl;
            }
        }
        void getTotalPagar(){
            this->totalPagar = this->sueldoMensual - this->descuentoAfp - this->descuentoIsr - this->descuentoIsss;
            cout << "Total a pagar: $" << this->totalPagar << endl << endl;
        }




};

#endif // TOTAL_H_INCLUDED
