#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente{
    private:
        int idCliente;
        char nombres[TAM];
        char apellidos[TAM];
    public:
        Cliente(int id, char n[], char ap[]);
        int getId();
        void mostrarNombre();
        void mostrarApellido();
};

#endif // CLIENTE_H_INCLUDED
