#include <stdio.h>
#include "tad.h"

void inicializar(TipoLista *lista){

    lista->primeiro = INICIOARRANJO;
    lista->ultimo = lista->primeiro;

}

void insere(int n, TipoLista *lista){

    if(lista->ultimo >= MAXTAM){

        printf("Lista cheia\n");
    
    }
    else{

        lista->Item[lista->ultimo] = n;
        lista->ultimo++;

    }

}

int pares(TipoLista lista){

    int nPares=0;
    int i;

    for(i=lista.primeiro; i<lista.ultimo; i++){

        if(lista.Item[i]%2==0){
            nPares++;
        }

    }

    return nPares;

}