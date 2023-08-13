#ifndef ABONOS_H_INCLUDED
#define ABONOS_H_INCLUDED

class Abonos{
    private:
        Fecha fechaAbono;
        float montoAbono;
    public:
        Abonos(Fecha, float);
        void setFecha(Fecha);
        Fecha getFecha();
        void setMonto();
        float getMonto(float);
};

#endif // ABONOS_H_INCLUDED
