#include <stdio.h>
#include <stdlib.h>

typedef struct TipoCelula{

    int Item;
    struct TipoCelula *ptr_prox;

}TipoCelula;

typedef struct TipoCelula *TipoApontador;

typedef struct{

    TipoApontador ptr_primeiro, ptr_ultimo;

}TipoLista;

void inicializar(TipoLista *lista);

void insere(int n, TipoLista *lista);

int Vazia(TipoLista lista);

void retira(TipoApontador p, TipoLista *lista);

void repetidos(TipoLista *lista);

void imprime(TipoLista lista);