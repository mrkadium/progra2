class telefono{
private:
	char numeros[10];
	char marca[10];
	int saldo;
	int saldo2;
	int saldo3;
	char buzon[10];
	char modelo[10];
public:
telefono(int s=50){
saldo=s;
saldo2=s;
saldo3=s;}
	int retirar(int n){
	    if(n<=50)
	    {
	    if(saldo<=0 || saldo<n)
	{
	    cout<<"usted no posee ese saldo"<<endl;
	    saldo==0;
	}else if(saldo>=0)
	{
	cout<<"retirando dinero"<<endl;
	saldo=saldo-n;
	}
	}else cout<<"solo posee $50 de saldo"<<endl;
	}
int retirar2(int n){
	if(n<=50)
	    {
	    if(saldo2<=0 || saldo2<n)
	{
	    cout<<"usted no posee ese saldo"<<endl;
	    saldo2==0;
	}else if(saldo2>=0)
	{
	cout<<"retirando dinero"<<endl;
	saldo2=saldo2-n;
	}
	}else cout<<"solo posee $50 de saldo"<<endl;
	}
int retirar3(int n){
	if(n<=50)
	    {
	    if(saldo3<=0 || saldo3<n)
	{
	    cout<<"usted no posee ese saldo "<<endl;
	    saldo3==0;
	}else if(saldo3>=0)
	{
	cout<<"retirando dinero"<<endl;
	saldo3=saldo3-n;
	}
	}else cout<<"solo posee $50 de saldo"<<endl;}
	int consultarsaldo(){
    cout<<"su saldo es:"<<endl;
    return saldo;}
    int consultarsaldo1(){
   return saldo2;
	}
	int consultarsaldo2(){
   return saldo3;
	}
	};
