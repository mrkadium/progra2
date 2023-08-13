#include <iostream>

using namespace std;
#include "Persona.h"
int main()
{
    Fecha f;
    f.setFecha(10, 13, 2017);

    Persona ob1;
    ob1.setNombre("Juan");
    ob1.setApellido("Perez");
    ob1.getFechaNac();
    return 0;
}
