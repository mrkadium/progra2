#include <iostream>
#include <cstring>
using namespace std;
#define TAM 20

#include "Factura.h"
#include "Det_factura.h"
#include "Producto.h"

Factura facturas[TAM];
Producto productos[TAM];
int cant_facturas = 0;
int cant_productos = 0;

void nuevaVenta(){
    facturas[cant_facturas].setFactura("Cliente nuevo", "13/03/2017");
    Det_factura detalle;
    detalle.setDet_factura(3, productos[0]);
    facturas[cant_facturas].agregarDetalle(detalle);
    cant_facturas++;

}

int main()
{

    int op;

    cout << "****** CAJA 1 ******" << endl;
    cout << "1. Nueva venta" << endl;
    cout << "2. Ver informacion de venta" << endl;
    cout << "3. Agregar nuevos productos" << endl;
    cout << "4. Salir" << endl;
    cin >> op;
    switch(op){
    case 1: //nueva venta
        do{
            productos[cant_productos].setProducto("PROD1", "PRODUCTO 1", 5);
            cant_productos++;
            nuevaVenta();
        }while(opc == 's');
        break;
    case 2: //ver info
        break;
    case 3://agregar productos
        break;
    default:
        break;
    };

    return 0;
}
