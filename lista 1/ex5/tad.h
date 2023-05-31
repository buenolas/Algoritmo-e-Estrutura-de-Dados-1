#include <stdio.h>
#define INICIOARRANJO 0
#define MAXTAM 10

typedef struct{

    int chave;

}TipoItem;

typedef struct{

    int Item[MAXTAM];
    int primeiro, ultimo;

}TipoLista;

void inicializar(TipoLista *lista);

void inserir(int n, TipoLista *lista);

void media(TipoLista lista, int *media);