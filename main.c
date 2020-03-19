#include <stdio.h>
int i;

// Pedro Antonio Estévez Pérez

// Ejercicio 10

/* Diseñar una función que reciba por parámetro un vector de enteros y que devuelva,
 * también por parámetro, el mayor y el menor número almacenados en el vector.
 * Probar la función desde un programa principal.*/

/* Tanto para mayor como para menor, recibimos los punteros y usamos los valores que
 * éstos contienen para hayar el maximo y el minimo. Retornamos los valores.*/

int mayor(int *vector, int longitud)
{
    int max = *vector;
    for (i=0; i<longitud; i++)
    {
        if (*(vector+i) > max)
            max = *(vector+i);
    }
    return max;
}

int menor(int *vector, int longitud)
{
    int min = *vector;
    for (i=0; i<longitud; i++)
    {
        if (*(vector+i) < min)
            min = *(vector+i);
    }
    return min;
}

int main(void)
{
    int longitud;

    while(1)
    {
        printf("Introduce la longitud del vector: ");
        scanf("%d", &longitud);
        if (longitud <= 0)
            printf("Introduce una longitud valida.\n");
        else
             break;
    }

    /* Creamos el vector, el puntero, los relacionamos, introducimos los valores mediante
     * el puntero y le pasamos los valores a las funciones.*/

    int vector[longitud];
    int *pvector;
    pvector = &vector[0];

    for (i=0; i<longitud; i++)
    {
        printf("Introduce el elemento %d: ", i);
        scanf("%d", &(*(pvector+i)));
    }

    int max = mayor(pvector,longitud);
    int min = menor(pvector,longitud);

    printf("El mayor elemento es: %d\n",max);
    printf("El menor elemento es: %d\n\n",min);

}
