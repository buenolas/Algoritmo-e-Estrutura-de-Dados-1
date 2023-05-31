#include <stdio.h>
#include "tad.h"

int main(){

    TipoLista lista;

    int i, maior, posicao, valor;
    
    inicializar(&lista);

    for(i=0; i<MAXTAM; i++){

        printf("Digite um valor:\n");
        scanf("%d", &valor);

        insere(valor, &lista);

    }

    buscaMaior(lista, &maior, &posicao);

    printf("Maior: %d\nPosicao: %d\n", maior, posicao);

    return 0;
}