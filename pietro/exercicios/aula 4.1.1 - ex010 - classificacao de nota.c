#include <stdio.h>

int main() {

    float nota;

    printf("Digite uma nota: ");
    scanf(" %f", &nota);

    if( nota >= 0 && nota < 60){
        printf("Reprovado!\n");
    } else if ( nota >= 60 && nota < 70 ){
        printf("Recuperação!");
    } else if ( nota >= 70 && nota <= 100){
        printf("Aprovado!");
    } else {
        printf("Nota informada inválida!");
    }

    return 0;
}