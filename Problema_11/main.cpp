/* Date: 20/07/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que permita manejar
 * las reservas de asientos en una sala de
 * cine, estos están organizados en 15
 * filas con 20 (asientos) cada una.
 *
 */


#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//variables globales
int filas = 15;
int asientos = 20;
int salaCine[15][20];
int continuar = 0;
int fila = 0;
int asiento = 0;

// definicion de funciones.
void menuPrincipal();
void mostrarSala();
void inicioSala();
bool hacerReserva(int fila, int asiento);
bool cancelarReserva(int fila, int asiento);

int main()
{

    menuPrincipal();



    return 0;
}

void menuPrincipal(){



    int opcionSelec = 0;

    do{
        cout <<""<<endl;
        cout <<"-----Menu principal-----"<<endl;
        cout <<"0 - Salir del Sistema."<<endl;
        cout <<"1 - Ver asientos disponibles."<<endl;
        cout <<"2 - Hacer una reserva."<<endl;
        cout <<"3 - Cancelar una reserva."<<endl;
        cout <<"------------------------"<<endl;


        cout <<"Selecciona una opcion: ";
        cin >> opcionSelec;
        cout <<""<<endl;

        switch(opcionSelec){

            case 0: //salir
                cout <<"Saliste del sistema..."<<endl;
                break;
            case 1: // ver asientos disponibles
                cout <<"Ver asientos disponibles"<<endl;
                mostrarSala();
                break;
            case 2:// hacer una reserva
                do{
                    cout <<"Hacer una reserva"<<endl;
                    cout<<"Ingrese fila: ";
                    cin>>fila;
                    cout<<"Ingrese asiento: ";
                    cin>>asiento;
                  }while(hacerReserva(fila, asiento)==false);
                  cout<<"El asiento fue reservado con exito."<<endl;

                break;
            case 3:// cancelar una reserva
            do{
                cout <<"Cancelar una reserva"<<endl;
                cout<<"Ingrese fila: ";
                cin>>fila;
                cout<<"Ingrese asiento: ";
                cin>>asiento;
              }while(hacerReserva(fila, asiento)==true);
              cout<<"El asiento fue cancelado con exito."<<endl;

            break;
            default:
                cout <<"Seleccion invalida."<<endl;

        }
            cout<<"Digite un numero para continuar..."<<endl;
            cin>>continuar;
            system("cls");
      }while(opcionSelec != 0);

}

void mostrarSala(){
    cout<<"--------Pantalla--------"<<endl;
    cout<<"   (a)(b)(c)(d)(e)(f)(g)(h)(i)(j)(k)(l)(m)(n)(o)(p)(q)(r)(s)(t)"<<endl;
    for(int i=1; i<=filas; i++){
        cout <<"("<<i<<")";
        for(int j=1; j<=asientos; j++){
            cout<<"["<<salaCine[i][j]<<"]";
        }
        cout<<""<<endl;
    }
}

void inicioSala(){

    for(int i=0; i<filas; i++){
        for(int j=0; j<asientos; j++){
            salaCine[i][j]=('-','+');
        }
    }
}

bool hacerReserva(int fila, int asiento){

    if(salaCine[fila][asiento] == 0){
        salaCine[fila][asiento] = 1;
        return true;  //Si se pudo reservar
    }
    else{
        cout<<"Ya esta reservado. Seleccione otro."<<endl;
    }
    return false; //no se pudo reservar
}



bool CancelarReserva(int fila, int asiento){

    if(salaCine[fila][asiento] == 1){
        salaCine[fila][asiento] = 0;
        return true;  //Si se pudo cancelar
    }
    else{
        cout<<"Ya esta cancelado. Seleccione otro."<<endl;
    }
    return false; //no se pudo cancelar
}


