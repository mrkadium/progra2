#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED
#include "Det_factura.h"
class Factura{
private:
    char fecha[TAM];
    char cliente[TAM];
    float total;
    int cant_detalles;
    Det_factura detalles[TAM];
public:
    Factura(){
        strcpy(fecha, "");
        strcpy(cliente, "");
        total = 0;
        cant_detalles = 0;
    }
    void setFactura(char cli[], char fe[]){
        strcpy(cliente, cli);
        strcpy(fecha, fe);
    }
    void agregarDetalle(Det_factura detalle){
        detalles[cant_detalles] = detalle;
        total += detalle.getTotal();
        cant_detalles++;
    }
    float getTotal(){return total;}
    void getInfo(){
        cout << "\n------------------------------\n";
        cout << "\t\tVenta de productos varios USO";
        cout << "\nCliente : "<< cliente;
        cout << "\nFecha : "<< fecha;
        cout << "\nDetalles : "<< endl;
        //modificar para mostrar lista
        for(i=0; i<cant_detalles; i++){
            if()
        }
        cout << "TOTAL A PAGAR : "<< getTotal();
        cout << "\nGracias por su compra!";
    }
};

#endif // FACTURA_H_INCLUDED
