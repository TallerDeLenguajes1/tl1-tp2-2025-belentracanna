#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main() {
    int i, j;
    int mt[N][M];
    int *ptr;

    srand(time(NULL)); // Inicializar la semilla del generador de números aleatorios

    ptr = &mt[0][0]; // El puntero apunta al primer elemento de la matriz

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            *(ptr + i * M + j) = 1 + rand() % 100; // Accediendo al elemento usando aritmética de punteros
            printf("%d\t", *(ptr + i * M + j));
        }
        printf("\n");
    }

    return 0;
}