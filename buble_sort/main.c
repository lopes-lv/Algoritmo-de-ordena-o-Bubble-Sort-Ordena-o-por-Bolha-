#include <stdio.h>
#include "nodo_bub.h"
#include <stdlib.h>
#include <time.h>




int main(){
    Lista *lista=criar_lista();

    srand(time(NULL));

    for(int i=0;i<10;i++){
        inserir_item(lista,rand()%100);
    }
    
    printf("Lista sem ordenacao\n");
    imprimir_lista(lista);

    ordenacao_int(lista);

    printf("Lista ordenada\n");
    imprimir_lista(lista);

    return 0;
}

