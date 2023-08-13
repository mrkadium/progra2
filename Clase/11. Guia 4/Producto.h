#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

class Producto{
private:
    char descripcion[TAM];
    char id[TAM];
    float precio;
public:
    Producto(){
        strcpy(id, "");
        strcpy(descripcion, "");
        precio=0;
    }
    void setProducto(char i[], char desc[], float pre){
        strcpy(id, i);
        strcpy(descripcion, desc);
        precio=pre;
    }
    char* getDescripcion(){return descripcion;}
    char* getId(){return id;}
    float getPrecio(){return precio;}
};

#endif // PRODUCTO_H_INCLUDED
