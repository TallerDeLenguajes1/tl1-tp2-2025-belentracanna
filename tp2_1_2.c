#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#define N 20

int main(){


int i;
double vt[N];
double *ptr; // Declare puntero double


srand(time(NULL));

printf("Valores generados en el vector (usando notacion indexada):\n");


    for (int i=0; i<N; i++)
    {

        vt[i] = 1 + rand() % 100; 
        printf("vt[%d] = %.2f\n",i,vt[i]);
 
    }
    printf("\nValores generados en el vector (usando aritmetica de punteros):\n");

  // Inicializa el puntero al principio del array
  ptr = vt;

  for (i = 0; i < N; i++) {
   // Acceda al elemento usando aritmética de punteros
    printf("vt[%d] = %.2f\n", i, *(ptr + i));
  }

  printf("\nValores generados en el vector (usando notacion indexada para recorrer):\n");

  for (ptr = vt, i = 0; ptr < vt + N; ptr++, i++) {
    printf("vt[%d] = %.2f\n", i, *ptr);
  }

return 0;

}