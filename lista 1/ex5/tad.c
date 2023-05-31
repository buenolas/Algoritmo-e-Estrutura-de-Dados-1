#include <stdio.h>
#include "tad.h"

void inicializar(TipoLista *lista){

    lista->primeiro = INICIOARRANJO;
    lista->ultimo = lista->primeiro;

}

void inserir(int n, TipoLista *lista){

    if(lista->ultimo>=MAXTAM){

        printf("Lista cheia\n");

    }
    else{

        lista->Item[lista->ultimo] = n;
        lista->ultimo++;

    }

}

void media(TipoLista lista, int *media){

    int i = lista.primeiro;

    *media = 0;

    while(i<lista.ultimo){

        *media += lista.Item[i];
        i++;

    }

    *media /= i;

}