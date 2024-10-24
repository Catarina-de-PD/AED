#include <stdio.h>
#include "pilha.h"

//Imprime a pilha
void imprimePilha(Pilha* p) {
    if (pilhaVazia(p)) {
        printf("A pilha está vazia.\n");
        return;
    }
    printf("Elementos da pilha: ");
    for (int i = 0; i <= p->topo; i++) {
        printf("%d ", p->elementos[i]);
    }
    printf("\n");
}

//Verifica se duas pilhas são iguais
int pilhasIguais(Pilha* p1, Pilha* p2) {
    if (p1->topo != p2->topo) {
        return 0; //Tamanhos diferentes
    }
    for (int i = 0; i <= p1->topo; i++) {
        if (p1->elementos[i] != p2->elementos[i]) {
            return 0; //Encontrou elementos diferentes
        }
    }
    return 1; //As pilhas são iguais
}

int main() {
    Pilha p1, p2;
    int valor;

    //Inicializando as pilhas
    inicializaPilha(&p1);
    inicializaPilha(&p2);

    //Empilhando valores na p1
    empilhar(&p1, 10);
    empilhar(&p1, 20);
    empilhar(&p1, 30);

    //Empilhando valores na p2
    empilhar(&p2, 10);
    empilhar(&p2, 20);
    empilhar(&p2, 30);

    //Imprimindo pilhas
    printf("Pilha 1:\n");
    imprimePilha(&p1);

    printf("Pilha 2:\n");
    imprimePilha(&p2);

    //Verificando se as pilhas são iguais
    if (pilhasIguais(&p1, &p2)) {
        printf("As pilhas são iguais.\n");
    } else {
        printf("As pilhas são diferentes.\n");
    }
    return 0;
}
