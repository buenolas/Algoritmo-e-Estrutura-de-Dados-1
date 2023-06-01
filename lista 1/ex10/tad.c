#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

void inicializar(TipoLista *lista){
    lista->ptr_primeiro = (TipoApontador)malloc(sizeof(TipoCelula));
    lista->ptr_ultimo = lista->ptr_primeiro;
}

void insere(int n, TipoLista *lista){

    lista->ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));

    lista->ptr_ultimo = lista->ptr_ultimo->ptr_prox;

    lista->ptr_ultimo->Item = n;

    lista->ptr_ultimo->ptr_prox = NULL;

}

int somaValores(TipoLista lista){
    int soma = 0;

    TipoApontador Aux;
    Aux = lista.ptr_primeiro->ptr_prox;

    while(Aux!=NULL){

        soma += Aux->Item;

        Aux = Aux->ptr_prox;
    }
    return soma;

}