#include <stdio.h>
#include <stdlib.h>

#define INICIOARRANJO 0
#define MAXTAM 10

typedef struct {

    int chave;

} TipoItem;

typedef struct{

    int Item[MAXTAM];
    int primeiro, ultimo;

} TipoLista;

void inicializar(TipoLista *lista);

void insere(int x, TipoLista *lista);

TipoLista concatenaLista(TipoLista *lista1, TipoLista *lista2);

void printLista(TipoLista lista);