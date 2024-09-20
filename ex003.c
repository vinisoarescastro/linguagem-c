#include <stdio.h>
#include <stdlib.h>

int main() {
    int nA, nB;
    
    // Lendo o número de elementos de cada conjunto
    do {
        printf("Entre com o numero de elementos do conjunto A: ");
        scanf("%d", &nA);
        if (nA <= 0) {
            printf("O numero de elementos do conjunto A deve ser maior do que zero\n");
        }
    } while (nA <= 0);

    do {
        printf("Entre com o numero de elementos do conjunto B: ");
        scanf("%d", &nB);
        if (nB <= 0) {
            printf("O numero de elementos do conjunto B deve ser maior do que zero\n");
        }
    } while (nB <= 0);

    // Alocando memória para os conjuntos
    int *A = (int*)malloc(nA * sizeof(int));
    int *B = (int*)malloc(nB * sizeof(int));

    // Lendo os elementos de cada conjunto, verificando duplicidades
    printf("Entre com os elementos do conjunto A: ");
    for (int i = 0; i < nA; i++) {
        scanf("%d", &A[i]);
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                printf("O conjunto nao pode ter elementos repetidos\n");
                i--; // Repete a leitura do elemento atual
                break;
            }
        }
    }

    printf("Entre com os elementos do conjunto B: ");
    for (int i = 0; i < nB; i++) {
        scanf("%d", &B[i]);
        for (int j = 0; j < i; j++) {
            if (B[i] == B[j]) {
                printf("O conjunto nao pode ter elementos repetidos\n");
                i--;
                break;
            }
        }
    }

    // Encontrando e imprimindo a união
    printf("Conjunto uniao: ");
    for (int i = 0; i < nA; i++) {
        printf("%d ", A[i]);
    }
    for (int i = 0; i < nB; i++) {
        int found = 0;
        for (int j = 0; j < nA; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", B[i]);
        }
    }
    printf("\n");

    // Encontrando e imprimindo a interseção
    printf("Conjunto interseccao: ");
    int found = 0;
    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("vazio");
    }
    printf("\n");

    // Encontrando e imprimindo a diferença A-B
    printf("Conjunto diferenca entre A e B: ");
    for (int i = 0; i < nA; i++) {
        int found = 0;
        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    // Encontrando e imprimindo a diferença B-A
    printf("Conjunto diferenca entre B e A: ");
    for (int i = 0; i < nB; i++) {
        int found = 0;
        for (int j = 0; j < nA; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", B[i]);
        }
    }
    printf("\n");

    // Liberando a memória alocada
    free(A);
    free(B);

    return 0;
}