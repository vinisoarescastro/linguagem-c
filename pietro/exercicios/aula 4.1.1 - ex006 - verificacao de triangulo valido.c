#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Digite três números separados por espaços, representando lados de um triângulo: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ( (num1 + num2) > num3 && (num2 + num3 ) > num1 && (num3 + num1) > num2 ){
        printf("É um triângulo válido.");
    } else {
        printf("É um triângulo inválido.");
    }

}