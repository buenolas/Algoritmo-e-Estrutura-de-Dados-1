#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main(){

    TipoLista lista1;
    TipoLista lista2;

    int i, valor, tam1, tam2;

    printf("Digite o tamanho da lista 1:\n");
    scanf("%d", &tam1);

    inicializar(&lista1);
    inicializar(&lista2);

    for(i=0; i<tam1; i++){

        printf("Digite um valor(lista 1):\n");
        scanf("%d", &valor);

        insere(valor, &lista1);

    }

    printf("Digite o tamanho da lista 2:\n");
    scanf("%d", &tam2);

    for(i=0; i<tam2; i++){

        printf("Digite um valor(lista 2):\n");
        scanf("%d", &valor);

        insere(valor, &lista2);

    }

    TipoLista lista3 = concatena(&lista1, &lista2);

    imprime(lista3);


    return 0;
}