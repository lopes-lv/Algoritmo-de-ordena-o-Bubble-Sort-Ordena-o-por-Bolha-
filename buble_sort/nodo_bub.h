# include <stdio.h>

typedef struct Nodo{
    int valor;
    struct Nodo *prox;
}Nodo;


typedef struct Lista{
    Nodo *inicio;
    Nodo *fim;
    int tam;
}Lista;

Lista *criar_lista();

void inserir_item(Lista* j,int valor);

Lista *ordenacao_int(Lista *l);

void imprimir_lista(Lista *l);
