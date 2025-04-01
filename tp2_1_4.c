#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDADCOMPUTADORAS 5
/* Desarrollar una aplicación en C que permita gestionar información sobre
computadoras (PC) utilizando estructuras y funciones. La aplicación deberá
generar datos aleatorios para un conjunto de PCs y luego implementar funciones
para mostrar la información y encontrar características específicas.
a. Definición de la Estructura de Datos
Deberás declarar un tipo de dato struct para representar una PC. La estructura se
llamará compu y contendrá los siguientes campos:
struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}*/

struct compu {
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
} typedef compu;

//funcion para generar y retornar una computadora//
compu retornarComputadora();
//funcion para mostrar la computadora//
void mostrarCompu(compu computadora);

int main(){
    srand(time(NULL));
    //arreglo para guardar las 5pc//
    compu compus[CANTIDADCOMPUTADORAS];
    mostrarCompu(retornarComputadora());
}

compu retornarComputadora()
{
    compu computadora;
    computadora.tipo_cpu = (char *)malloc(sizeof(char) * 10);
    //generamos los valores numericos aleatorios//
    computadora.velocidad = rand() % 3 + 1;
    computadora.anio = rand() % 10 + 2015;
    computadora.cantidad_nucleos= rand() % 8 + 1;
    //matriz para guardar los diferentes nombres de procesador//
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};
    //numero aleatorio para extraer el nombre del CPU//
    int numero = rand() % 6;
    //copiamos la cadena en el puntero de tipo char//
    strcpy(computadora.tipo_cpu,tipos[numero]);
    //retornamos la computadora//
    return computadora;
}

void mostrarCompu(compu computadora){
    //mostramos las componentes de la computadora//
    printf("--------COMPUTADORA----------\n");
    printf("velocidad: %d\n",computadora.velocidad);
    printf("anio: %d\n",computadora.anio);
    printf("cantidad de nucleos: %d\n",computadora.cantidad_nucleos);
    printf("Tipo CPU: %s\n",computadora.tipo_cpu);
}