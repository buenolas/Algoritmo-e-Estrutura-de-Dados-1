#include <stdio.h>
#define INICIOARRANJO 0
#define MAXTAM 10

typedef struct{

    int chave;

} TipoItem;

typedef struct{

    int Item[MAXTAM];
    int primeiro, ultimo;

} TipoLista;

void inicializar(TipoLista *lista);

void insere(int n, TipoLista *lista);

int pares(TipoLista lista);
