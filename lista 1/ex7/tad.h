#include <stdio.h>
#include <stdlib.h>

//estrutura da celula
typedef struct TipoCelula {
    
    int Item;
    struct TipoCelula *ptr_prox;

}TipoCelula;

//definicao do ponteiro TipoApontador
typedef struct TipoCelula *TipoApontador;

//estrutura da lista
typedef struct {

    TipoApontador ptr_primeiro, ptr_ultimo;

}TipoLista;

void inicializar(TipoLista *Lista);

void insere(int n, TipoLista *Lista);

TipoLista concatena(TipoLista *Lista1, TipoLista *Lista2);

void imprime(TipoLista Lista);