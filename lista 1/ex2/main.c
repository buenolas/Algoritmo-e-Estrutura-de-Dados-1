#include <stdio.h>
#include "tad.h"

int main(){
    TipoLista lista;

    int max = 10;
    int i, valor, n;

    inicializar(&lista);

    for(i=0; i<max; i++){

        printf("Digite o valor:\n");
        scanf("%d", &valor);

        insere(valor, &lista);

    }

    printf("Digite os n primeiros elementos a serem retirados:\n");
    scanf("%d", &n);

    retira(n, &lista);

    imprime(lista);

    return 0;
}