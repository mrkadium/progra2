#include <iostream>
#define TAM 20
using namespace std;
#include "TELEFONO.h"
int main()
{

    char a [10];
    char b [10];
    Telefono obj1;
    int opc;
    cout << " SERVICIO DE TELEFONIA" << endl;
    cout <<"INGRESE LOS DATOS DE SU TELEFONO"<< endl;
    cout<< "Marca: ";
    cin >> a;
    cout<< "modelo: ";
    cin >> b;

    obj1.setDatos(a,b,1.0,0.05);
        do{
      int opc;
      cout<<"      SELECCIONE   "<<endl;
      cout<<"1. Realizar Recarga"<<endl;
      cout<<"2. Realizar Llamada"<<endl;
      cout<<"3. Enviar SMS"<<endl;
      cout<<"4. Consultar Datos"<<endl;
      cout<< "5. Salir"<<endl;

      cin>> opc;

      switch(opc){
  case 1:
      int recarga;
      cout<<"digite la cantidad de Recarga"<<endl;
      cin>> recarga;
      obj1.hacerRecargas(recarga);
      break;
  case 2:
      obj1.hacerLlamda();
      break;
  case 3:
      obj1.enviarSMS();
      break;
  case 4:
      cout<<"Los Datos que usted ingreso son: "<<endl;
      obj1.consultarDatos();
      break;
  case 5:

  default:
      break;

      }

}while(opc !=5);
    return 0;
}
