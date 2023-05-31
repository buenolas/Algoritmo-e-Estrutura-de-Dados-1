#include <stdio.h>
#include "tad.h"

int main(){

    TipoLista lista1;
    TipoLista lista2;

    int i, valor;
    int max = 5;

    inicializar(&lista1);
    inicializar(&lista2);

    for(i=0; i<max; i++){

        printf("Digite um valor(lista1):\n");
        scanf("%d", &valor);

        insere(valor, &lista1);
    }

    for(i=0; i<max; i++){

        printf("Digite um valor(lista2):\n");
        scanf("%d", &valor);

        insere(valor, &lista2);
    }

    TipoLista lista3 = concatenaLista(&lista1, &lista2);

    printLista(lista3);


    return 0;
}