#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if ( (num % 2 ) == 0 ) {
        printf("O número %d é PAR.\n", num);
    } else {
        printf("O número %d é ÍMPAR.\n", num);
    }

    printf("Resto da divisão: %d \n", num % 2);

}