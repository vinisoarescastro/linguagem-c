#include <stdio.h>

int main() {
    float media;

    printf("Insira uma nota: ");
    scanf("\n%f", &media);

    if ( media >= 7 ){
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
}