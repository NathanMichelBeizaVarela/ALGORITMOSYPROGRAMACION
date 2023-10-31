#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, j, n, posanterior = 0, numeroactual = 0;
    srand(time(NULL));

    printf("Número de elementos a ordenar: ");
    scanf("%d", &n);

    int lista[n];
    printf("Lista sin ordenar:\n");

    for (i = 0; i < n; i++) {
        lista[i] = rand() % 100 + 1;
        printf("%d ", lista[i]);
    }

    printf("\n");

    for (i = 1; i < n; i++) {
        numeroactual = lista[i];
        posanterior = i - 1;
        
        while (posanterior >= 0 && lista[posanterior] > numeroactual) {
            lista[posanterior + 1] = lista[posanterior];
            posanterior--;
        }
        
        lista[posanterior + 1] = numeroactual;
    }

    printf("Lista ordenada:\n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }

    printf("\n");

    return 0;
}

