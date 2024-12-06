#ifndef FILA_H
#define FILA_H

#define MAX 100  //Tamanho máximo da fila

typedef struct {
    char elementos[MAX];
    int inicio, fim;
} Fila;

//Funções
void criaFila(Fila* f);
int vazia(Fila* f);
int cheia(Fila* f);
int insere(Fila* f, char elemento);
int retira(Fila* f, char* elemento);
void imprimeFila(Fila* f);

#endif
