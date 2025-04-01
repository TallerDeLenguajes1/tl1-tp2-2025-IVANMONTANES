/*En el archivo tp2_1_2.c copie código del archivo tp2_1_1.c y luego haga las
modificaciones necesarias para utilizar aritmética de punteros (notación indexada)
para recorrer el vector.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int main(){
    srand(time(NULL));
    int i;
    double vt[N];
    for(i = 0;i<N; i++)
    {
        *(vt + i)=1+rand()%100;
        printf("%f\n", *(vt + i));
    }
}