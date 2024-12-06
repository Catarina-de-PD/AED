#include <stdio.h>
#include "fila.h"

void criaFila(Fila* f){
    f->inicio = 0;
    f->fim = 0;
}

int vazia(Fila* f){
    return (f->inicio == f->fim);
}

int cheia(Fila* f){
    return ((f->fim + 1) % MAX == f->inicio);
}

int insere(Fila* f, char elemento){
    if (cheia(f)) {
        printf("Erro: Fila cheia!\n");
        return 0; 
    }
    f->elementos[f->fim] = elemento;
    f->fim = (f->fim + 1) % MAX;
    return 1; 
}

int retira(Fila* f, char* elemento){
    if (vazia(f)) {
        printf("Erro: Fila vazia!\n");
        return 0; 
    }
    *elemento = f->elementos[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    return 1; 
}

void imprimeFila(Fila* f){
    if (vazia(f)) {
        printf("Fila vazia.\n");
        return;
    }
    int i = f->inicio;
    printf("Elementos da fila: ");
    while (i != f->fim) {
        printf("%c ", f->elementos[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}
