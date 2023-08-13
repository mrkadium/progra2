
#include <iostream>
#include <cstdlib>

using namespace std;
#include "Estudiante.h"
#include "Materia.h"
#include "Inscripcion.h"
#define TAM 10

///variables de clases (globales)
Inscripcion in[TAME];
Inscripcion lista;
Estudiante es[10];
int contador=0;
int cm =0;
Materia *m;
///comprobacion del estudiante si existe
int buscarEstudiante(int id)
{
    ///la posicion sera negatia si no encuentra a un id igual
    int pos=-1;
    bool encontrado  = false;
    int i=0;
    while(i<contador && !encontrado)
    {
        if(in[i].getEstudiante()->getId()==id)
        {
            encontrado = true;
            pos=i;
        }
        else{i++;}
    }
    return pos;   ///regresara el id para poder ejecutar el programa
}

///Menu de opciones
int menu()
{
    int op;
    cout<<"MENU DE OPCIONES"<<endl;
    cout<<"1. inscribir materias"<<endl;
    cout<<"2. hoja de inscripcion"<<endl;
    cout<<"3. salir"<<endl;
    cout<<"digite su opcion"<<endl;
    cin>>op;
    return op;   ///regresa la variable op

}


int main()
{

    int opc;

    do{

    opc = menu();

       switch(opc)
       {

       case 1:
        {
            ///parametos a pedir
            string nombre;
            string apellido;
            int id;
            string ciclo;
            string materias[5];

            ///capturando los datos que necesitare
            cout<<"el id de su inscipcion sera el numero "<<contador<<endl;
            cout<<"digite el id del estudiante "<<endl;
            cin>>id;

            ///El algoritmo buscara y realizara actividades segun se enuentre la comprobación
            buscarEstudiante(id);
            int posicion = 0;
            posicion = buscarEstudiante(id);

            if(posicion>=0)
            {
                cout<<"el estudiante existe"<<endl;  ///no permitira inscribir con el mismo id existente
            }

            else{
                    ///de lo contrario pedira los datos y los almacenara
            cout<<"digite el nombre del estudiante"<<endl;
            cin>>nombre;
            cout<<"digite el apellido del estudiante"<<endl;
            cin>>apellido;
            bool decision = false;
            do{
            cout<<"digite las materias del estudiante"<<endl;
            cin>>materias[cm];
            m=new Materia(id,materias[cm]);
            lista.agregarMaterias(m);
            /*string sino;
            cout <<"desea seguir inscibiendo mas materias?   s   n  (ingrese solo una letra)"<<endl;
            cin>>sino;
            ///pedira que decidamos si queremos agregar mas materias para sumarla en el vector
            if(sino == "s")
            {
                cm++;
            }

            if(sino== "S")
            {
                cm++;
            }

            if(sino== "n")
            {
                decision = true;
            }

            if(sino== "N")
            {
                decision = true;
            }*/

system("pause");
system("cls");
            }while(decision!=true);
Inscripcion lista;
Estudiante *e;
Materia *m;

///ingresando los valores a su clase a encajar
e= new Estudiante(id,nombre,apellido);
m = new Materia(id,materias[cm]);

///añadiendo a la superclase las variables de tipo clase pero en lista
 lista.agregarMaterias(m);
lista.setIdInscripcion(contador);
lista.setCicloAcademico(ciclo);
lista.setEstudiante(e);

///añadiendo en una posicion mis variables a la superclase
in[contador] = lista;
contador++;
            }
            break;
        }

       case 2:
        {
            if(contador>0)
{
    ///pidiendo el id de la inscripcion para mostrar la hoja del estudiante inscrito
            int indicacion;
            cout <<"escriba el id del inscripcion "<<endl;
            cin>>indicacion;

            for(int i = 0; i<contador;i++)
            {
                if (in[i].getIdInscripcion()==indicacion) ///comprobando que el numero de inscripcion existe
                {
                    ///Mostrando los datos del estudiante segun mi clase

                    cout <<"id del estudiante  "<<in[i].getEstudiante()->getId()<<endl;
                    cout<<"el nombre es: "<<in[i].getEstudiante()->getNombre()<<endl;
                    cout<<"el apellido es: "<<in[i].getEstudiante()->getApellido()<<endl;
                    cout<<"mateias inscritas: "<<in[i].getContadorMateria()<<endl;
                    in[i].mostrarMateias();
                    ///separado para mostar en orden
                    cout<<""<<endl;
                    cout<<""<<endl;

                }
                else{cout<<"inscripcion inexistente"<<endl;}
            }
}
else{cout<<"agrege inscipciones de estudiante(s) "<<endl;}  ///si no hay nada en el vector de la superclase, no mostrara los datos
            break;
        }

       case 3:
        {
            cout<<"saliendo del pograma..."<<endl; ///saliendo del programa
            break;
        }

       default:
        cout<<"opcion invalida, intente nuevamente... "<<endl;

       }

system("pause");
system("cls");
    ///salida del dowhile
}while(opc!=3);

///FIN DEL ALGORITMO
    return 0;
}
