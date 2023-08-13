#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Estudiante.h"
#include "Materia.h"
#include "Inscripcion.h"
#define TAM_Est 10
#define TAM_Mat 5
    int op;
    Materia listaMat[TAM_Mat];
    Estudiante listaEst[TAM_Est];
    Inscripcion listaIn[TAM_Est];
    int contadorMat;
    int contadorEst;
    int contadorIn;

void Menu();
int buscarInscripcion(Inscripcion lst[], int cc, int id);
bool capturarInscripcion(Inscripcion lstIn[], Materia lstM[], int cc);
void informacionInscripcion(Inscripcion lst[], Materia lstM[], int cc);

int main(){

    do{
        system("cls");
        Menu();
        cin >> op;
        switch(op){
            case 1: ///Solicitar los datos del estudiante
                if (capturarInscripcion(listaIn, listaMat, contadorIn))
                    contadorIn++;
            break;
            case 2: ///Mostrar los datos y la hoja de inscripcion del estudiante
                informacionInscripcion(listaIn, listaMat, contadorIn);
            break;
            case 3: ///Salir
            break;
        }
        system("pause");
    }while(op!=3);
    return 0;
}
void Menu(){
    cout << "********** MENU DE OPCIONES **********" << endl;
    cout << "1. Inscribir materias" << endl;
    cout << "2. Mostrar hoja de inscripcion" << endl;
    cout << "3. Salir" << endl<<endl;
    cout << "Digite la opcion: ";
}
int buscarInscripcion(Inscripcion lst[], int cc, int id){
    int pos=-1;
    bool encontrado = false;
    int contador=0;
    while (contador < cc && !encontrado){
        if (lst[contador].getIdInscripcion() == id){
            encontrado = true;
            pos = contador;
        }
        else{
            contador++;
        }
    }
    return pos;
}
bool capturarInscripcion(Inscripcion lstIn[], Materia lstM[], int cc){
    int id, idM;
    string nom, ape, mate;
    Estudiante est;
    Materia mat;
    Inscripcion lista;
    int contador = 0;
    bool retorno;
    char opc;
    cout << "Su ID de inscripcion es: " << contador << endl;
    cout << "Digite el codigo del estudiante: ";
    cin >> id;
    if (buscarInscripcion(lstIn, cc, id) >=0){
        cout << "El estudiante ya existe\n";
        retorno = false;
    }
    else{
        cout << "Digite el nombre del estudiante: ";
        cin >> nom;
        cout << "Digite el apellido del estudiante: ";
        cin >> ape;
        est = Estudiante(id, nom, ape);
        listaEst[cc] = est;
        cout << "Ingrese las materias que desea inscribir: " << endl;
        do{
            cout << "ID de la materia: ";
            cin >> idM;
            cout << "Nombre de la materia: ";
            cin >> mate;
            cout << "Desea ingresar otra materias? s/n";
            cin >> opc;
        }while(opc!='n');
        mat = Materia(idM, mate);
        lstM[cc] = mat;
        retorno = true;
    }
    lista.agregarMaterias(mat);
    lista.setEstudiante(est);
    cout << "Inscripcion realizada :D";
    contador++;
    return retorno;
}
void informacionInscripcion(Inscripcion lst[], Materia lstM[], int cc){
    int nc;
    cout << "Digite el ID de inscripcion: ";
    cin >> nc;
    int pos = buscarInscripcion(lst, cc, nc);
    if (pos>=0){
        cout << "Estudiante: " << lst[pos].getEstudiante().getNombre() << " " << lst[pos].getEstudiante().getApellido();
        cout << "Materias inscritas: ";
        cout << lstM[pos].getMateria() << endl;
    }
    else{
        cout << "La inscripcion no se encontro :(";
    }
}
