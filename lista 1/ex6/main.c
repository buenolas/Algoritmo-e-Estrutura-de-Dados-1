#include "tad.h"
#include <stdio.h>
#include <stdlib.h>
// este exemplo ira inicializar a lista, inserir 5 elementos, imprimir os
// elementos, remover elementos e imprimir elementos da lista (se nao forem
// removidos todos os elementos)
int main() {
    
    TipoLista lista;
    
    int item;
    
    TipoApontador p;
    
    int i;
    
    float tamanho = 0;
        
    // inicializar a lista
    Inicializar(&lista);

    int vet[MAX] = {5, 6, 7, 8, 9};
    
    
    criaLista(vet, MAX, &lista);
    
    

    // imprimir toda a lista
    Imprime(lista);
    return (0);
}