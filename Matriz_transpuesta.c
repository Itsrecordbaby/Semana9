#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamano;

    printf("Ingrese el tamano de la matriz: ");
    scanf("%d", &tamano);

    int matriz[tamano][tamano];

    //Generar numeros aleatorios entre 0 y 100

    srand(time(NULL));

    //LLenar la mtriz con numeros aleatorios
     for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matriz[i][j] = rand() % 101; // Generar número aleatorio entre 0 y 100
        }
    }

    //Imprimir la matriz original
     printf("Matriz original:\n");
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //calcular la matriz transpuesta 
int transpuesta[tamano][tamano];
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            transpuesta[i][j] = matriz[j][i];
         }
     }

     // imprimir matriz transpuesta 

      printf("Matriz transpuesta:\n");
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

return 0;
}
// en el commit final se arreglo el nombre de las variables por que escribi tamaño en ves de tamano como estaba en la variable, se agrego el calculo de la mtriz transpuesta y el calculo de la matriz transpuesta 