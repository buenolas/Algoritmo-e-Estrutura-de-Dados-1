#include <stdio.h>

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

int somaValores(TipoLista lista);