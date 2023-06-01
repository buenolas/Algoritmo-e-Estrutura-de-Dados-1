#include <stdio.h>
#include "tad.h"

int main(){

    TipoLista lista;

    int i, valor, tamanho;

    inicializar(&lista);

    printf("Digite o tamanho da lista:\n");
    scanf("%d", &tamanho);

    for(i=0; i<tamanho; i++){

        printf("Digite um valor:\n");
        scanf("%d", &valor);

        insere(valor, &lista);

    }

    repetidos(&lista);

    imprime(lista);


    return 0;
}