#include<iostream>
using namespace std;
#include "cajero.h"
#include<stdlib.h>
int main(){
telefono cellprueba(50);
int opc,n,na;
do{
    system("cls");
    cout<<endl;
     cout<<endl;
      cout<<endl;
      cout<<"\t\t\t     menu de opciones:\n";
      cout<<endl;
      cout<<endl;
    cout<<"\t\t\t************************\n";
	cout<<"\t\t\t** 1. retirar dinero  **\n";
	cout<<"\t\t\t** 2. consultar saldo **\n";
	cout<<"\t\t\t** 3. salir           **\n";
	cout<<"\t\t\t************************\n";
	cout<<endl;
      cout<<endl;
cout<<"\t\t\tdigite la opcion que desea procesar:";
cin>>opc;
system("cls");
switch(opc){
	case 1:
	cout<<endl;
     cout<<endl;
      cout<<endl;
	cout<<"\t\t\t     menu de opciones:\n";
      cout<<endl;
      cout<<endl;
    cout<<"\t\t\t************************\n";
	cout<<"\t\t\t**       1. $20       **\n";
	cout<<"\t\t\t**       2. $10       **\n";
	cout<<"\t\t\t**       3. $5        **\n";
	cout<<"\t\t\t************************\n";
	cout<<endl;
      cout<<endl;
	cout<<"\t\t digite la opcion de acuerdo al billete q desea procesar."<<endl;
	cin>>na;
	if(na==1)
	{
	    cout<<cellprueba.consultarsaldo();
	     cout<<" billetes de $20"<<endl;
	    cout<<"cuantos billetes desea retirar:";
	    cin>>n;
    cellprueba.retirar(n);
	break;
	} else if(na==2)
        {cout<<"su saldo es :"<<endl;
            cout<<cellprueba.consultarsaldo1();
            cout<<" billetes de $10"<<endl;
            cout<<"cuantos billetes desea retirar: "<<endl;
            cin>>n;
        cellprueba.retirar2(n);
        break;
        } else if(na==3)
        {cout<<"su saldo es :"<<endl;
            cout<<cellprueba.consultarsaldo2();
	     cout<<" billetes de $5"<<endl;
            cout<<"cuantos billetes desea retirar: "<<endl;
            cin>>n;
        cellprueba.retirar3(n);
        break;
        }
    case 2:
	cout<<cellprueba.consultarsaldo();
    cout<<" "<<"billetes de $20"<<endl;
    cout<<cellprueba.consultarsaldo1();
    cout<<" "<<"billetes de $10"<<endl;
    cout<<cellprueba.consultarsaldo2();
    cout<<" "<<"billetes de $5"<<endl;
	break;
	case 3:
	break;
	default:
	cout<<"error";
	break;
}
system("pause");
}while(opc!=4);
return 0;
}
