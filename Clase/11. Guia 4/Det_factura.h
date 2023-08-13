#ifndef DET_FACTURA_H_INCLUDED
#define DET_FACTURA_H_INCLUDED

#include "Producto.h"

class Det_factura{
private:
    int cantidad;
    Producto producto;
public:
    Det_factura(){
        cantidad=0;
    }
    void setDet_factura(int cant, Producto prod){
        cantidad = cant;
        producto = prod;
    }
    float getTotal(){return producto.getPrecio()*cantidad;}
    void getDetalle(){
        cout << cantidad << " " << producto.getDescripcion() << " " << producto.getPrecio() << " c/u " << getTotal() << endl;
    }
};

#endif // DET_FACTURA_H_INCLUDED
