#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

void inicializar(TipoLista *lista){

    lista->ptr_primeiro = (TipoApontador)malloc(sizeof(TipoCelula));
    
    lista->ptr_ultimo = lista->ptr_primeiro;

    lista->ptr_primeiro->ptr_prox = NULL;

}

void insere(int n, TipoLista *lista){

    lista->ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));

    lista->ptr_ultimo = lista->ptr_ultimo->ptr_prox;

    lista->ptr_ultimo->Item = n;

    lista->ptr_ultimo->ptr_prox = NULL;

}

int Vazia(TipoLista Lista) {
    return (Lista.ptr_primeiro == Lista.ptr_ultimo); 
}

void retira(TipoApontador p, TipoLista * Lista) { /* --- Obs.: o item a ser retirado e o seguinte ao apontado por p ---
*/
    int valor;
    TipoApontador q;
    if (Vazia(*Lista) || p == NULL || p->ptr_prox == NULL) // se lista vazia ou p
    {
        printf("Erro - Lista vazia ou posicao nao existe!\n");
    } 
    else {
        q = p->ptr_prox;
        
        valor = q->Item;
        
        printf("O valor removido foi: %d\n", valor);
        
        p->ptr_prox = q->ptr_prox;
        
        if (p->ptr_prox == NULL)
            Lista->ptr_ultimo = p;
    
        free(q);
    }
 }
 /* Retira fim */

void repetidos(TipoLista *lista){

    TipoApontador Aux;

    Aux = lista->ptr_primeiro->ptr_prox;

    int i;

    TipoApontador Valor;

    Valor = lista->ptr_primeiro->ptr_prox;

    while(Aux!=NULL){

        while(Valor->ptr_prox!=NULL){

            if(Aux->Item == Valor->ptr_prox->Item){

                printf("Valor repetido: %d\n", Valor->ptr_prox->Item);

                retira(Valor, lista);

            }
            
            if(Valor->ptr_prox!=NULL){
                
            Valor = Valor->ptr_prox;
            
            }        
        }

        Aux = Aux->ptr_prox;
        Valor = Aux;
        
    }

}

void imprime(TipoLista lista){

    TipoApontador Aux;

    Aux = lista.ptr_primeiro->ptr_prox;

    while(Aux!=NULL){

        printf("%d\n", Aux->Item);

        Aux = Aux->ptr_prox;

    }

}