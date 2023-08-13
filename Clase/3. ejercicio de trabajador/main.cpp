#include <iostream>
#include <stdlib.h>
#include <string.h>
#define TAM 10
using namespace std;
#include "Trabajador.h"
#include "Fecha.h"
int contador = 0;
int Menu(){
    int o;

    cout<<"\t\tMENU"<<endl;
    cout<<"\t1- Agregar trabajador a la lista"<<"("<<contador<<"/"<<"10"<<")"<<endl;
    cout<<"\t2- Mostrar lista de trabajadores"<<endl;
    cout<<"\t3- buscar y mostrar detalles del trabajador"<<endl;
    cout<<"\t4- salir ."<<endl;
    cout<<"\tDIGITE UNA OPCION\n\t";
    cin>>o;
    return o;
}
int main()
{
    char nom[TAM], ape[TAM];
    Trabajador tra[TAM];

    int opc,suel,id,d;
    int di,m,a;
    do{
        system("cls");
      opc=Menu();
      switch(opc){
      case 1:
          if(contador<10){
            cout<<"Escriba los datos del trabajador"<<endl;
            cout<<"ID : ";
            cin>>id;
            cout<<"Nombre : ";
            cin>>nom;
            cout<<"Apellido : ";
            cin>>ape;
            cout<<"Fecha de nacimiento , (escriba por dia , mes y anio): ";
            cin>>d>>m>>a;
             Fecha *f = new Fecha(di,m,a);
            cout<<"Sueldo Mensual : ";
            cin>>suel;
            tra[contador].setId(id);
            tra[contador].setNombres(nom);
            tra[contador].setApellidos(ape);
            tra[contador].setSueldoMensual(suel);contador++;
          }
          else{
            cout<<"La lista esta llena"<<endl;
          }

        break;
      case 2:
          for(int i=0; i<contador; i++){
                cout << "ID: ";
            cout<<tra[i].getId()<<"\n";
            cout << "Nombre: ";
            tra[i].getNombres();
            cout<<"\n";
            cout << "Apellido: ";
            tra[i].getApellidos();
            cout<<"\n";
            cout<< "Sueldo mensual: " << tra[i].getSueldoMensual()<<"\n";
            cout<< "Total a pagar: " << tra[i].getTotalPagar()<<"\n";
            cout <<"la fecha es: "<<tra[i].getFechaNac()<<endl;
          }
        break;
      case 3:
          cout<<"Escriba el ID del trabajador"<<endl;
          cin>>d;
          for(int i=0; i<=contador; i++){
            if(d==tra[i].getId()){
                cout<<"ID: "<<tra[i].getId()<<endl;
                cout<<"Nombre: ";
                tra[i].getNombres();
                cout<<"Apellido: ";
                tra[i].getApellidos();
                cout<<"Sueldo: "<<tra[i].getSueldoMensual();
                cout<<"Total a pagar: "<<tra[i].getTotalPagar();
            }
          }
        break;
      case 4:
        break;
      }
      system("pause");
    }while(opc!=4);
    return 0;
}
