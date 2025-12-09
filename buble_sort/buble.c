#include <stdio.h>
#include "Nodo_bub.h"
#include <stdlib.h>






Lista *criar_lista(){
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    if(lista!=NULL){
        lista->inicio=NULL;
        lista->fim=NULL;
        lista->tam=0;
    }
    return lista;   
}


void inserir_item(Lista *j,int valor){
    Nodo *novo=(Nodo*)malloc(sizeof(Nodo));
    if(novo==NULL){
        printf("malloc deu erro");
        return;
    }
    novo->valor=valor;
    novo->prox=NULL;


    if(j->inicio==NULL){
        j->inicio=novo;
        j->fim=novo;
    }else{
        j->fim->prox=novo;
        j->fim=novo;
    }
    j->tam++;
    
}

void imprimir_lista(Lista *l){
    if(l->tam==0){
        printf("Lista vazia");
        return;
    }else{
        Nodo *atual=l->inicio;

        while(atual!=NULL){
            printf("[%d]--",atual->valor);
            atual=atual->prox;
        }
        printf("\nFim da lista\n");
    }
}

Lista *ordenacao_int(Lista *l) {
    if (l == NULL || l->inicio == NULL) return l; 

    while (1) {
        Nodo *anterior = NULL;
        Nodo *atual = l->inicio;
        Nodo *proximo = atual->prox;
        int contador = 0;

        while (proximo != NULL) {
            if (atual->valor > proximo->valor) {
                
                Nodo *troca = atual;

                if (anterior != NULL) {
                    anterior->prox = proximo;
                } else {
                    l->inicio = proximo;
                }

                
                troca->prox = proximo->prox;
                proximo->prox = troca;
                
                contador++;

                // --- ATUALIZAÇÃO DOS PONTEIROS (FALTAVA ISSO) ---
                anterior = proximo;      // O 'proximo' agora está antes do 'atual'
                proximo = atual->prox; // O novo 'proximo' é quem vem depois do 'atual'

                

            } else {
                
                anterior = atual;
                atual = atual->prox;
                proximo = proximo->prox;
            }
        }

        
        if (contador == 0) {
            return l;
        }
    }
}
    

    






