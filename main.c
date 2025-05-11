#include <stdio.h>
#include <string.h>
#include "funciones.h"
#include "lecturas.h"

int main()
{
    int cantidadProductos;
    char nombreBuscado[MAX_TEXT];
    int continuar;

    cantidadProductos = leerCantidadProductos("Cuantos productos desea ingresar: ", 1);

    float productos[cantidadProductos];
    char nombres[cantidadProductos][MAX_TEXT];

    leerProductos(nombres, productos, cantidadProductos);

    float total = calcularTotal(productos, cantidadProductos);
    float promedio = calcularPromedio(total, cantidadProductos);

    printf("\nTotal del inventario: %.2f\n", total);
    printf("Promedio de precios: %.2f\n", promedio);

    productosMayorMenor(productos, cantidadProductos);

    do
    {
        printf("\nIngrese el nombre del producto a buscar: ");
        scanf("%s", nombreBuscado);
        buscarProducto(nombres, productos, cantidadProductos, nombreBuscado);

        printf("\nDesa buscar informacion de otro producto(1 para continuar)");
        scanf("%d", &continuar);

    } while (continuar == 1);

    return 0;
}
