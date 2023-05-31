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

void buscaMaior(TipoLista lista, int *maior, int *posicao){

    int i;
    
    *maior = lista.Item[lista.primeiro];
    *posicao = lista.primeiro;

    for(i=lista.primeiro; i <= lista.ultimo; i++){

        if(lista.Item[i] > *maior){

            *maior = lista.Item[i];
            *posicao = i;

        }

    }

}

void imprime(TipoLista lista){

    int aux;

    for(aux = lista.primeiro; aux <= lista.ultimo; aux++){

        printf("%d\n", lista.Item[aux]);

    }

}