#include "tp0.h"
#include <stdlib.h>

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)          *
 * *****************************************************************/

void swap(int *x, int *y) {
    if (x == NULL || y == NULL)
        return;
    int aux = *x;
    *x = *y;
    *y = aux;
    return;
}


int maximo(int vector[], int n) {
    int posc_max;

    if ( n==0 || n<0 )
        return -1;

    posc_max = 0;
    while ( --n ) {
        if (vector[posc_max] <= vector[n])
            posc_max = n;
    }
    return posc_max;
}


int comparar(int vector1[], int n1, int vector2[], int n2) {
    for ( size_t posc_actual = 0 ; posc_actual<n1 && posc_actual<n2 ; posc_actual++ ) {
        if ( vector1[posc_actual] != vector2[posc_actual])
            return ( vector1[posc_actual]-vector2[posc_actual]>0 )?1:-1;
    }
    if ( n1==n2 )
        return 0;
    return ( n1-n2>0 )?1:-1;
}


void seleccion(int vector[], int n) {
    for (; n ;n--) {
    //dentro del ciclo se sabe que n no es 0
        swap(vector+n-1,vector+maximo(vector,n));
    }
    return;
}
