#include<iostream>
#include<conio.h>
using namespace std;

int main(){

// programa de c++ a java
// tablas de operaciosnes

   int numero=1 ;
   while(numero>0){
   cout<<"Digite un numero positivo"<<endl;
   cin>>numero;
   switch(numero){
   case 0:
       return 0;

       }
       cout<<"tabla de multiplicar"<<endl;
       for(int i=1;i<=10;i++){
    cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
   }
   cout<<"Tabla de  la resta"<<endl;
     for(int i=1;i<=10;i++){
            cout<<numero<<"-"<<i<<"="<<numero-i<<endl;
            }
   cout<<"Tabla de  el  modulo"<<endl;
     for(int i=1;i<=10;i++){
            cout<<numero<<"%"<<i<<"="<<numero%i<<endl;
            }
 cout<<"Tabla de la division"<<endl;
     for(int i=1;i<=10;i++){
            cout<<numero<<"/"<<i<<"="<<numero/i<<endl;
            }
 cout<<"Tabla de la suma"<<endl;
     for(int i=1;i<=10;i++){
            cout<<numero<<"%"<<i<<"="<<numero%i<<endl;
            }
}
 cout<<"Fin del programa"<<endl;

 system("pause");

return 0;
}
