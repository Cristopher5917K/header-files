#include<stdio.h>
#define MAX_TEXT 60

void leerProductos(char nombreProducto[][MAX_TEXT], float producto[], int cantidadProdctos);
int leerCantidadProductos(char *mensaje, int minimoProductos);
void buscarProducto(char nombreProducto[][MAX_TEXT], float producto[], int cantidadProductos, char nombreBuscado[]);