#include "Fecha.h"
Fecha::Fecha(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->anio = a;
}
void Fecha::mostrarFecha(){
    cout << this->dia << "/" << this->mes << "/" << this->anio;
}
bool Fecha::esValida(){
    bool valida = false;
    if (this->mes == 4 || this->mes == 6 || this->mes == 9 || this->mes == 11){
        if (this->dia > 0 && this->dia <=30){
            valida = true;
        }
    }
    else{
        if (this->mes == 2){
            ///Es bisiesto
            if ((this->anio%4==0 && this->anio%100!=0)||(this->anio%4==0 && this->anio%400==0)){
                if (this->dia >0 && this->dia <=29){
                    valida = true;
                }
            }
            else{
                if (this->dia > 0 && this->dia <=28){
                    valida = true;
                }
            }
        }
        else{
            ///Los meses de 31
            if (this->mes >0 && this->mes <=12){
                if (this->dia > 0 && this->dia <=31){
                    valida = true;
                }
            }
        }
    }
    return valida;
}
