#include <iostream>
using namespace std;
#include "Trabajador.h"
int main(){
    Fecha *f = new Fecha(10,10,2017);
    Trabajador t;
    t.setNombres("Juan");
    t.setApellidos("Perez");
    t.setFechaNac(f);
    t.setSueldoMensual(200);
    ///Mostrar los resultados
    cout << "Trabajador : ";
    t.getNombres();
    cout << " ";
    t.getApellidos();
    cout << "\n";
    cout << "Fecha de Nacimiento : ";
    t.getFechaNac()->mostrarFecha();
    cout << "\n";
    cout << "Sueldo mensual : " << t.getSueldoMensual() << endl;
    cout << "Descuento Isss : " << t.getDescuentoIsss() << endl;
    cout << "Descuento Afp : " << t.getDescuentoAfp() << endl;
    cout << "Descuento Isr : " << t.getDescuentoIsr() << endl;
    cout << "Total Pagar :  " << t.getTotalPagar() << endl;

    return 0;
}
