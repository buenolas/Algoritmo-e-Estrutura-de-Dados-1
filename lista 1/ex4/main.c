#include <stdio.h>
#include "tad.h"

int main(){

    TipoLista lista;

    int valor, i;

    inicializar(&lista);

    for(i=0; i<MAXTAM; i++){

        printf("Digite o valor:\n");
        scanf("%d", &valor);

        insere(valor, &lista);

    }

    int nPares = pares(lista);

    printf("%d pares na lista.\n", nPares); 


    return 0;
}

