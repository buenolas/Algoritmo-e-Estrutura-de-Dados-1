#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

void inicializar(TipoLista *lista){

    lista->ptr_primeiro = (TipoApontador)malloc(sizeof(TipoCelula));

    lista->ptr_ultimo = lista->ptr_primeiro;

    lista->ptr_ultimo->ptr_prox = NULL;

}

void inserir(int n, TipoLista *lista){

    lista->ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));

    lista->ptr_ultimo = lista->ptr_ultimo->ptr_prox;

    lista->ptr_ultimo->Item = n;

    lista->ptr_ultimo->ptr_prox = NULL;

}

void ordena(TipoLista *lista){

    int trocou;

    TipoApontador atual, anterior = NULL;

    do{
        trocou = 0;
        atual = lista->ptr_primeiro;

        while(atual->ptr_prox != anterior){

            if(atual->Item > atual->ptr_prox->Item){

                int temp = atual->Item;
                atual->Item = atual->ptr_prox->Item;
                atual->ptr_prox->Item = temp;

                trocou = 1;

            }
            atual = atual->ptr_prox;

        }
        anterior = atual;

    }while(trocou);

}

void imprime(TipoLista lista){

    TipoApontador Aux;

    Aux = lista.ptr_primeiro->ptr_prox;

    while(Aux != NULL){

        printf("%d\n", Aux->Item);


        Aux = Aux->ptr_prox;
    }

}

TipoLista concatena(TipoLista *lista1, TipoLista *lista2) {
    TipoLista lista3;
    inicializar(&lista3);

    TipoApontador Aux1 = lista1->ptr_primeiro->ptr_prox;
    TipoApontador Aux2 = lista2->ptr_primeiro->ptr_prox;

    while (Aux1 != NULL || Aux2 != NULL) {
        if (Aux1 != NULL) {
            inserir(Aux1->Item, &lista3);
            Aux1 = Aux1->ptr_prox;
        }
        if (Aux2 != NULL) {
            inserir(Aux2->Item, &lista3);
            Aux2 = Aux2->ptr_prox;
        }
    }

    return lista3;
}
