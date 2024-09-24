#include <stdio.h>

int main(){

    char nome[50];
    float num1;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite um número: ");
    scanf("%f", &num1);

    if (num1 < 0) {
        printf("\nO número: %.1f é negativo!", num1);
    } else if (num1 == 0) {
        printf("\nO número: %.1f é neutro!", num1);
    } else {
        printf("\nO número: %.1f é positivo!", num1);
    }
    
    printf("\n");
    printf("%s, obrigado por utilizar nosso programa!", nome);

}