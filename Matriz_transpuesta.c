#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamano;

    printf("Ingrese el tamano de la matriz: ");
    scanf("%d", &tamaño);

    int matriz[tamaño][tamaño];

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
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //imrprimir la matriz transpuesta 


    
    




}