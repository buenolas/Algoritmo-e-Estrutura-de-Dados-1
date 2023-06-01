#include "tad.h"
#include <stdio.h>
#include <stdlib.h>


void inicializar(TipoLista *Lista) {
 
 Lista->ptr_primeiro = (TipoApontador)malloc(sizeof(TipoCelula)); // alocar memoria
 
 Lista->ptr_ultimo = Lista->ptr_primeiro; // ultimo ptr aponta para o primeiro ptr
 
 Lista->ptr_primeiro->ptr_prox = NULL; // o ptr do primeiro NO aponta para null
}

void insere(int n, TipoLista *Lista){

    Lista->ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));

    Lista->ptr_ultimo = Lista->ptr_ultimo->ptr_prox;

    Lista->ptr_ultimo->Item = n;

    Lista->ptr_ultimo->ptr_prox = NULL;

}

TipoLista concatena(TipoLista *Lista1, TipoLista *Lista2){
    TipoLista Lista3;

    inicializar(&Lista3);

    TipoApontador Aux;

    Aux = Lista1->ptr_primeiro->ptr_prox;

    while(Aux!=NULL){
        Lista3.ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));

        Lista3.ptr_ultimo = Lista3.ptr_ultimo->ptr_prox;

        Lista3.ptr_ultimo->Item = Aux->Item;

        Lista3.ptr_ultimo->ptr_prox = NULL;

        Aux = Aux->ptr_prox;

    }

    Aux = Lista2->ptr_primeiro->ptr_prox;

    while(Aux!=NULL){
        Lista3.ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));

        Lista3.ptr_ultimo = Lista3.ptr_ultimo->ptr_prox;

        Lista3.ptr_ultimo->Item = Aux->Item;

        Lista3.ptr_ultimo->ptr_prox = NULL;

        Aux = Aux->ptr_prox;

    }

    return Lista3;

}

void imprime(TipoLista Lista){

    TipoApontador Aux;

    Aux = Lista.ptr_primeiro->ptr_prox;

    while(Aux!=NULL){

        printf("%d\n", Aux->Item);

        Aux = Aux->ptr_prox;

    }

}