/* Date: 20/07/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Escribe un programa que permita
 * al usuario ingresar una matriz
 * cuadrada, imprime la matriz y
 * verifica si la matriz es un cuadrado mágico.
*/


#include <iostream>

using namespace std;

int main()
{
    int sz;

       cout << "\nIngrese dimension del cuadrado: ";
       cin >> sz;

       const int constMagica = (sz * ( sz * sz + 1 )) / 2;
       int matriz[sz][sz];

       cout << "\nIngrese valores del cuadrado (1 al " << sz * sz << "):\n";
       for( int i = 0; i < sz; i++ )
           for( int j = 0; j < sz; j++ ) {
               cout << "[" << i << "][" << j << "]: ";
               cin >> matriz[i][j];
           }

       cout << "\nImprimir cuadrado:\n\n";
       for( int i = 0; i < sz; i++ ) {
           cout << " | ";
           for( int j = 0; j < sz; j++ )
               cout << matriz[i][j] << " ";

           cout << "| " << endl;
       }

       bool esMagico = true;
       int i = 0;
       while( i < sz && esMagico == true ) {
           int suma = 0;
           for( int j = 0; j < sz; j++ ) {
               suma += matriz[i][j];
           }
           if( suma != constMagica ) esMagico = false;
           i++;
       }

       if( !esMagico ) {
           cout << "\nLos valores no corresponden a un cuadrado magico" <<endl;
           return 0;
       }

       int j = 0;
       while( j < sz && esMagico == true ) {
           int suma = 0;
           for( int i = 0; i < sz; i++ ) {
               suma += matriz[i][j];
           }
           if( suma != constMagica ) esMagico = false;
           j++;
       }

       if( !esMagico )  cout << "\nLos valores no corresponden a un cuadrado magico" << endl;
       else cout << "\nLos valores SI corresponden a un cuadrado magico" << endl;

    return 0;
}
