#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main(){

    TipoLista lista1;
    TipoLista lista2;

    int valor, i, tamanho1;

    inicializar(&lista1);
    inicializar(&lista2);

    printf("Digite o tamanho da lista 1: \n");
    scanf("%d", &tamanho1);

    for(i=0; i<tamanho1; i++){

        printf("Digite o valor(lista 1): \n");
        scanf("%d", &valor);

        inserir(valor, &lista1);

    }
    int tamanho2;
    int valor2;

    printf("Digite o tamanho da lista 2: \n");
    scanf("%d", &tamanho2);

    for(i=0; i<tamanho2; i++){
        printf("Digite o valor(lista 2):\n");
        scanf("%d", &valor2);

        inserir(valor2, &lista2);

    }

    ordena(&lista1);
    ordena(&lista2);

    TipoLista lista3 = concatena(&lista1, &lista2);

    printf("\n\n");
    imprime(lista3);


    return 0;
}