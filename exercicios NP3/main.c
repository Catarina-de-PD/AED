#include <stdio.h>
#include "fila.h"

int main() {
    Fila f1, f2;
    char elemento;
    
    //Cira filas
    criaFila(&f1);
    criaFila(&f2);

    //Inserção em f1
    printf("Inserindo elementos na Fila f1:\n");
    insere(&f1, 'A');
    insere(&f1, 'B');
    insere(&f1, 'C');
    imprimeFila(&f1);

    //Inserção em f2
    printf("\nInserindo elementos na Fila f2:\n");
    insere(&f2, 'X');
    insere(&f2, 'Y');
    insere(&f2, 'Z');
    imprimeFila(&f2);

    //Remoção de f1
    printf("\nRemovendo um elemento de f1:\n");
    if (retira(&f1, &elemento)) {
        printf("Elemento removido: %c\n", elemento);
    }
    imprimeFila(&f1);
    
    printf("Fila f1 após a troca:\n");
    imprimeFila(&f1);
    
    printf("Fila f2 após a troca:\n");
    imprimeFila(&f2);

    return 0;
}
