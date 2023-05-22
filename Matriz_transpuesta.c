#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    // Generar numeros aleatorios entre 0 y 100
    srand(time(NULL));

    // Llenar la matriz con numeros aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Generar numero aleatorio entre 0 y 100
        }
    }

    // Imprimir la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcular la matriz transpuesta
    int transpuesta[columnas][filas];
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }

    // Imprimir la matriz transpuesta
    printf("Matriz transpuesta:\n");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Ahora si es el commit final el programa anterior no cuenta, 
// lo que paso es que me imprimia una matriz cuadrada jejeje:)