#include <iostream>
#include <stdlib.h>
using namespace std;
void login();

int main(){
 login();
 return 0;
}
void login(){
 string nombre;
 string pass;
 int i;
 for(i=1; i<6; i++){
 //system("cls");
 cout << endl;
 cout << "      BIENVENIDO AL SISTEMA DE LOGIN       " << endl;
 cout << "___________________________________________" << endl; 
 cout << endl;
 cout << "Ingrese Informacion de Usuari@" << endl;
 cout << endl;
 cout << "¿Nombre de Usuari@?" << endl;
 cin >> nombre;
 if(nombre == "g"){
  cout << "Nombre de Usuari@ Correcto, Ingrese Su Contrasena (4 digitos):" << endl;
  cin >> pass;
  if(pass == "1234"){
   cout << endl;
   cout << "Contrasena Correcta, Bienvenid@!! será Redirigido a la Aplicacion.." << endl;
   //system("pause>null");
   exit(0);
 }
  else
   if(pass != "1234"  ){
    cout << "Contrasena Incorrecta, Ingrese un Usuari@ y Contrasena Valida" << endl;
    //system("pause>null");
   }
 }
 else
  if(nombre != "g"){
    cout << "Nombre de Usuari@ Incorrecto, Ingrese su Nombre de Usuari@ Nuevamente" << endl;
  //system("pause>null");
 }

 if(i > 0){
    cout << endl;
    cout << "Ha realizado " << i << "/2 intentos" << endl;
    cout << endl;
    //system("pause>null");
   }
 if(i == 2){
   cout << endl;
   cout << "Ha realizado 2 intentos, por Seguridad el Programa se Cerrará..." << endl;
   //system("pause>null");
   exit(0);
  }
 }

}
