#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main(){

    TipoLista lista;

    int i, valor, tamanho;

    inicializar(&lista);

    printf("Digite o tamanho da lista:\n");
    scanf("%d", &tamanho);

    for(i=0; i< tamanho; i++){

        printf("Digite um valor:\n");
        scanf("%d", &valor);

        insere(valor, &lista);

    }

    int soma = somaValores(lista);

    printf("A soma dos valores da lista é %d\n", soma);


    return 0;
}