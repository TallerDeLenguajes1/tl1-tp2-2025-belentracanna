#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CANTIDAD_PCS 5
#define MAX_TIPO_CPU 10 // Ajustado al tamaño de las cadenas en el arreglo tipos

// Definición de la estructura para representar una computadora (PC)
struct compu {
    int velocidad;          // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;               // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos;   // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;         // Tipo de procesador (apuntador a cadena de caracteres)
};

int main() {
    // Por ahora, solo la definición de la estructura
    return 0;
}