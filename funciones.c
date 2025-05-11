#include <stdio.h>
#include "funciones.h"

float calcularTotal(float producto[], int cantidadProdctos) {
    float totalInventario = 0;
    for (int i = 0; i < cantidadProdctos; i++) {
        totalInventario += producto[i];
    }
    return totalInventario;
}

float calcularPromedio(float totalInventario, int cantidadProdctos) {
    return totalInventario / cantidadProdctos;
}

void productosMayorMenor(float producto[], int cantidadProdctos) {
    float productoCaro = producto[0];
    int contCaro = 0;
    float productoBarato = producto[0];
    int contBarato = 0;

    for (int i = 1; i < cantidadProdctos; i++) {
        if (producto[i] < productoBarato) {
            productoBarato = producto[i];
            contBarato = i;
        }
        if (producto[i] > productoCaro) {
            productoCaro = producto[i];
            contCaro = i;
        }
    }

    printf("El producto mas barato es el %d con precio %.2f\n", contBarato + 1, productoBarato);
    printf("El producto mas caro es el %d con precio %.2f\n", contCaro + 1, productoCaro);
}
