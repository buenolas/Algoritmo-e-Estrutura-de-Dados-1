#include <stdio.h>
#include "tad.h"

void inicializar(TipoLista *lista){

    lista->primeiro = INICIOARRANJO;
    lista->ultimo = lista->primeiro;

}

void insere(int x, TipoLista *lista){

    if(lista->ultimo >= MAXTAM){
        
        printf("Lista cheia!\n");

    }
    else{

        lista->Item[lista->ultimo] = x;
        lista->ultimo++;

    }

}

void retira(int n, TipoLista *lista){

    int i;

    for(i=0; i<n; i++){

        lista->Item[i] = 0;
        lista->primeiro++;

    }

}

void imprime(TipoLista lista){

    int aux;

    for(aux = lista.primeiro; aux<=lista.ultimo; aux++){

        printf("%d\n", lista.Item[aux]);

    }

}