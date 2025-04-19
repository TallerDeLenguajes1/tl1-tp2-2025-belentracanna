#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CANTIDAD_PCS 5
#define MAX_TIPO_CPU 10

// Definición de la estructura para representar una computadora (PC)
struct compu {
    int velocidad;          // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;               // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos;   // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;         // Tipo de procesador (apuntador a cadena de caracteres)
};
int generar_aleatorio(int min, int max) ;

void listarPCs(struct compu pcs[], int cantidad) ;

int main() {
    srand(time(NULL)); // Inicializar la semilla para números aleatorios

    // Arreglo predefinido de tipos de CPU
    char tipos[6][MAX_TIPO_CPU] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    // Definición del arreglo de estructuras compu para almacenar las PCs
    struct compu pcs[CANTIDAD_PCS];

    // Generación de datos aleatorios para las PCs
    for (int i = 0; i < CANTIDAD_PCS; i++) {
        pcs[i].velocidad = generar_aleatorio(1, 3);
        pcs[i].anio = generar_aleatorio(2015, 2024);
        pcs[i].cantidad_nucleos = generar_aleatorio(1, 8);

        // Asignar un tipo de CPU aleatorio
        int indice_aleatorio = rand() % 6;
        pcs[i].tipo_cpu = tipos[indice_aleatorio];
    }

    // Mostrar la lista de PCs
    listarPCs(pcs, CANTIDAD_PCS);

    return 0;
}

// Función para generar un entero aleatorio dentro de un rango
int generar_aleatorio(int min, int max) {
    
    return min + rand() % (max - min + 1);
}

// Función para listar las PCs
void listarPCs(struct compu pcs[], int cantidad) {
    printf("--- Lista de Computadoras ---\n");
    for (int i = 0; i < cantidad; i++) {
        printf("PC %d:\n", i + 1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año: %d\n", pcs[i].anio);
        printf("  Cantidad de núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo de CPU: %s\n", pcs[i].tipo_cpu);
        printf("-------------------------\n");
    }
}
