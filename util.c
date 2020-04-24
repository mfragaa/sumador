/* Programa para sumar n numeros
 * Hecho por MFA
 */


#include <stdio.h>

void leeArreglo(int n, int arreglo[])
{
	int indice;
    
    for(indice=0;indice<n;indice++){
        printf("cual es el numero %d? ",indice);
        scanf("%d",&(arreglo[indice]));
        //printf("%d\n", arreglo[indice]);
    }

}

