#ifndef PILHA_H
#define PILHA_H

#define MAX 100 // Definindo o tamanho máximo da pilha

typedef struct {
    int elementos[MAX];
    int topo;
} Pilha;

// Funções primitivas
void inicializaPilha(Pilha* p);
int pilhaVazia(Pilha* p);
int pilhaCheia(Pilha* p);
int empilhar(Pilha* p, int valor);
int desempilhar(Pilha* p, int* valor);
int topoPilha(Pilha* p, int* valor);

#endif
