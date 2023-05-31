#include <stdio.h>
#include "tad.h"

int main(){

    TipoLista lista;

    int i, valor, md;

    inicializar(&lista);

    for(i=0; i<MAXTAM; i++){

        printf("Digite o valor:\n");
        scanf("%d", &valor);

        inserir(valor, &lista);

    }

    media(lista, &md);

    printf("Media: %d\n", md);



    return 0;
}