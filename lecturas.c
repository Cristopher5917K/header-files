#include <stdio.h>
#include <string.h>
#include "lecturas.h"

void leerProductos(char nombreProducto[][MAX_TEXT], float producto[], int cantidadProdctos) {
    for (int i = 0; i < cantidadProdctos; i++) {
        printf("\nIngrese el nombre del producto %d: ", i + 1);
        scanf("%s", nombreProducto[i]);  

        printf("Ingrese el precio del producto %d: ", i + 1);
        while (scanf("%f", &producto[i]) != 1 || producto[i] < 0) {
            while (getchar() != '\n');
            printf("Valor invalido, intente de nuevo.\n");
            printf("Ingrese el precio del producto %d: ", i + 1);
        }
    }
}

int leerCantidadProductos(char *mensaje, int minimoProductos) {
    int cantidadProdctos = 0;

    printf("%s", mensaje);
    while (scanf("%d", &cantidadProdctos) != 1 || cantidadProdctos < minimoProductos) {
        while (getchar() != '\n');
        printf("\nValor invalido, intente de nuevo.\n");
        printf("%s", mensaje);
    }

    return cantidadProdctos;
}

void buscarProducto(char nombreProducto[][MAX_TEXT], float producto[], int cantidadProductos, char nombreBuscado[]) {
    int encontrado = 0;
    for (int i = 0; i < cantidadProductos; i++) {
        if (strcmp(nombreProducto[i], nombreBuscado) == 0) {
            printf("\nProducto encontrado: %s cuesta $%.2f\n", nombreProducto[i], producto[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("\nProducto '%s' no encontrado.\n", nombreBuscado);
    }
}
