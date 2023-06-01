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

void inserir(int n, TipoLista *lista);

void ordena(TipoLista *lista);

TipoLista concatena(TipoLista *lista1, TipoLista *lista2);

void imprime(TipoLista lista);