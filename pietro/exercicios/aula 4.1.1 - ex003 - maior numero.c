#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    if ( num1 > num2 ) {
        printf("O maior número é %d.", num1);
    } else {
        printf("O maior número é %d.", num2);
    }

}