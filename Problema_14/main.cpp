/* Date: 20/07/2022
 * Author: Hector Orozco
 * Informatica II 2022-1
 * Elabora un programa que llene una matriz 5x5
 * con los números del 1 al 25 y la imprima,
 * luego imprime la matriz rotada 90, 180 y 270 grados.
 *
 */


#include <iostream>
#define N 5
using namespace std;


int matriz[5][5]={{1,2,3,4,5},
                  {6,7,8,9,10},
                  {11,12,13,14,15},
                  {16,17,18,19,20},
                  {21,22,23,24,25}};

int main()
{

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<" "<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<" "<<endl;

    for (int x = 0; x < N / 2; x++) {
        for (int y = x; y < N - x - 1; y++) {
                int temp = matriz[x][y];
                matriz[x][y] = matriz[y][N - 1 - x];
                matriz[y][N - 1 - x] = matriz[N - 1 - x][N - 1 - y];
                matriz[N - 1 - x][N - 1 - y] = matriz[N - 1 - y][x];
                matriz[N - 1 - y][x] = temp;
            }
        }

        for (int i = 0; i < N; i++)
           {
               for (int j = 0; j < N; j++)
               {
                   cout<<matriz[i][j]<<"\t";
               }
               cout<<endl;
           }
           cout<<endl;

           cout<<" "<<endl;
           cout<<"--------------------------------------"<<endl;
           cout<<" "<<endl;

           for (int x = 0; x < N / 2; x++) {
                   for (int y = x; y < N - x - 1; y++) {
                       int temp = matriz[x][y];                // guarda la matriz en  variable temporal
                       matriz[x][y] = matriz[y][N - 1 - x];    // mueve valores derecha hacia arriba
                       matriz[y][N - 1 - x] = matriz[N - 1 - x][N - 1 - y];  //mueve valores abajo hacia derecha
                       matriz[N - 1 - x][N - 1 - y] = matriz[N - 1 - y][x];  //mueva valores izquierda hacia abajo
                       matriz[N - 1 - y][x] = temp;                          // asigna temporal en la izquierda
                   }
               }

           for (int i = 0; i < N; i++)       // recorre matriz resultante y luego imprime.
              {
                  for (int j = 0; j < N; j++)
                  {
                      cout<<matriz[i][j]<<"\t";
                  }
                  cout<<endl;
              }
              cout<<endl;

              cout<<" "<<endl;
              cout<<"--------------------------------------"<<endl;
              cout<<" "<<endl;

              for (int x = 0; x < N / 2; x++) {

                      for (int y = x; y < N - x - 1; y++) {
                          int temp = matriz[x][y];
                          matriz[x][y] = matriz[y][N - 1 - x];
                          matriz[y][N - 1 - x] = matriz[N - 1 - x][N - 1 - y];
                          matriz[N - 1 - x][N - 1 - y] = matriz[N - 1 - y][x];
                          matriz[N - 1 - y][x] = temp;
                      }
                  }

              for (int i = 0; i < N; i++)
                 {
                     for (int j = 0; j < N; j++)
                     {
                         cout<<matriz[i][j]<<"\t";
                     }
                     cout<<endl;
                 }
                 cout<<endl;

                 cout<<" "<<endl;
                 cout<<"--------------------------------------"<<endl;
                 cout<<" "<<endl;

                 for (int x = 0; x < N / 2; x++) {
                         for (int y = x; y < N - x - 1; y++) {
                             int temp = matriz[x][y];
                             matriz[x][y] = matriz[y][N - 1 - x];
                             matriz[y][N - 1 - x] = matriz[N - 1 - x][N - 1 - y];
                             matriz[N - 1 - x][N - 1 - y] = matriz[N - 1 - y][x];
                             matriz[N - 1 - y][x] = temp;
                         }
                     }

                 for (int i = 0; i < N; i++)
                    {
                        for (int j = 0; j < N; j++)
                        {
                            cout<<matriz[i][j]<<"\t";
                        }
                        cout<<endl;
                    }
                    cout<<endl;

    return 0;

}


