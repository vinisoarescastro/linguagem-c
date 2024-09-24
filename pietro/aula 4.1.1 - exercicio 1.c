#include <stdio.h>

int main(){

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("\n %f", &nota);

    if ( nota >= 7 ) {
        printf("\nAprovado(a)!");
    } else if ( nota >= 5 && nota < 7 ) {
        printf("\nDependência.");
    } else {
        printf("\nReprovado(a)!");
    }

}
