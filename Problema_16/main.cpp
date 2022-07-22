/* Date: 20/07/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 *
 * Escribe un programa que reciba un
 * número n y calcula el número de
 * caminos posibles en una cuadrícula de nxn.
 *
 */

#include <iostream>

using namespace std;
int numeroCaminos(int m, int n);

int main()
{
    int valor, m, n;
    cout <<"ingrese un valor: ";
    cin >>valor;
    valor = m, n;
    cout<<"Para una malla de 2x2 puntos hay "<<numeroCaminos(3, 3)<<" caminos."<<endl;
    return 0;
}

int numeroCaminos(int m, int n)
{

if (m == 1 || n == 1)
        return 1;

// If diagonal movements are allowed then the last
// addition is required.
return numeroCaminos(m-1, n) + numeroCaminos(m, n-1);
        // + numberOfPaths(m-1,n-1);

}
