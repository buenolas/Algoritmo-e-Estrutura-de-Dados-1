#include <stdio.h>
#include "tad.h"


void inicializar(TipoLista *lista){

    lista->primeiro = INICIOARRANJO;

    lista->ultimo = lista->primeiro;

}

void insere(int x, TipoLista *lista){

    if(lista->ultimo>=MAXTAM){
        printf("A lista esta cheia.\n");
    }
    else{
        lista->Item[lista->ultimo] = x;
        lista->ultimo++;
    }

}

TipoLista concatenaLista(TipoLista *lista1, TipoLista *lista2){

    TipoLista lista3;

    lista3.primeiro = lista1->primeiro;
    lista3.ultimo = (lista1->ultimo + lista2->ultimo) -1;

    int x=0;

    while(x!=lista1->ultimo){

        if(x>10){

            printf("A concatenacao ultrapassou o tamanho da lista.\n");
            break;
        
        }
        else{

            lista3.Item[x] = lista1->Item[x];
            x++;

        }
    }
    
    int i=0;

    while(i!=lista2->ultimo){

        if(i>10){

            printf("A concatenacao ultrapassou o tamanho da lista.\n");
            break;
        
        }
        else{

            lista3.Item[x] = lista2->Item[i];
            i++;
            x++;

        }
    }

    return lista3;

}

void printLista(TipoLista lista){

    int aux;

    for(aux = lista.primeiro; aux <= lista.ultimo; aux++){

        printf("%d\n", lista.Item[aux]);

    }

}