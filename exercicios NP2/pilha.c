#include "pilha.h"

void inicializaPilha(Pilha* p) {
    p->topo = -1; //Pilha vazia inicialmente
}

int pilhaVazia(Pilha* p) {
    return p->topo == -1;
}

int pilhaCheia(Pilha* p) {
    return p->topo == MAX - 1;
}

int empilhar(Pilha* p, int valor) {
    if (pilhaCheia(p)) {
        return 0; //Pilha cheia
    }
    p->elementos[++(p->topo)] = valor;
    return 1; //Sucesso
}

int desempilhar(Pilha* p, int* valor) {
    if (pilhaVazia(p)) {
        return 0; //Pilha vazia
    }
    *valor = p->elementos[(p->topo)--];
    return 1; //Sucesso
}

int topoPilha(Pilha* p, int* valor) {
    if (pilhaVazia(p)) {
        return 0; //Pilha vazia
    }
    *valor = p->elementos[p->topo];
    return 1; //Sucesso
}
