#ifndef TELEFONO_H_INCLUDED
#define TELEFONO_H_INCLUDED
#define TAM 20
#include <string.h>

class Telefono{

  private:
      char marca[TAM];
      char modelo[TAM];
      float saldo;
      int numLlamadas;
      int numSMSEnviados;
      float costoLlamada;
      float costoSMS;
  public:
    void setDatos (char m[],char md[], float cl, float cm){

   strcpy( this->marca,m);
   strcpy(this->modelo,md);
    this->costoLlamada = cl;
    this->costoSMS = cm;
    this-> saldo=0;
    this-> numLlamadas=0;
    this->numSMSEnviados=0;
    }
    void hacerRecargas(float r){
        this->saldo= this-> saldo + r;
    }
    float hacerLlamda(){
        if(this->saldo >= this->costoLlamada){
            cout<<"Haciendo Llamada...."<<endl;
            this->saldo=saldo-this->costoLlamada;
            this ->numLlamadas+=1;

        }
        else{
            cout<<"SALDO INSUFICIENTE"<<endl;
        }
    }
    void enviarSMS(){
        if(this->saldo >= this->costoSMS){
            cout<<"enviando mensaje...."<<endl;
            this->saldo=saldo-this->costoSMS;
            this ->numSMSEnviados+=1;
        }
         else{
            cout<<"SALDO INSUFICIENTE"<<endl;
             }
        }
    void consultarDatos(){
         cout<<"MARCA : "<< marca<<endl;
         cout<<"MODELO : "<< modelo<<endl;
         cout<<"SALDO : "<< saldo<<endl;
         cout<<"NUMERO DE LLAMADAS : "<< numLlamadas<<endl;
         cout<<"NUMERO DE SMS : "<<numSMSEnviados<<endl;

    }

    };


#endif // TELEFONO_H_INCLUDED
