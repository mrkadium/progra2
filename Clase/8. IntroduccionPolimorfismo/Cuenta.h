#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED
#define TAM_Abonos 5
#include "Fecha.h"
#include "Cliente.h"
#include "Abonos.h"
class Cuenta{
    private:
        int numeroCuenta;
        Fecha fechaApertura;
        Cliente cliente;
        Abonos listaAbonos[TAM_Abonos];
        int contadorAbonos;
        float Saldo;
    public:
        Cuenta(){
        }
        Cuenta(int nc){
            this->numeroCuenta = nc;
            this->contadorAbonos = 0;
            this->Saldo = 0;
        }
        void setNumeroCuenta(int nc){
            this->numeroCuenta = nc;
        }
        int getNumeroCuenta(){
            return this->numeroCuenta;
        }
        void setCliente(Cliente c){
            this->cliente = c;
        }
        Cliente getCliente(){
            return this->cliente;
        }
        void setFechaApertura(Fecha fa){
            this->fechaApertura = fa;
        }
        Fecha getFechaApertura(){
            return this->fechaApertura;
        }
        float getSaldo(){
            return this->Saldo;
        }
        string hacerAbonos(Abonos ab){
            string r;
            if (this->contadorAbonos < TAM_Abonos){
                ///Permitir agregar abonos
                this->listaAbonos[this->contadorAbonos] = ab;
                this->Saldo += ab.getMonto();
                this->contadorAbonos++;
                r = "Abono agregado exitosamente";
            }
            else{
                r = "La lista de abonos esta llena";
            }
        }
        string getAbonos(){
            string r;
            if (this->contadorAbonos==0){
                r = "No hay abonos";
            }
            else{
                ///Tarea2 concatenacion de un flotante a string
                r = "Monto\tFecha\n";
                for (int i=0;i<this->contadorAbonos;i++){
                    r += this->listaAbonos[i].getMonto();
                    r += "\t" + this->listaAbonos[i].getFecha().getFecha() + "\n";
                }
            }
            return r;
        }

};
#endif // CUENTA_H_INCLUDED
