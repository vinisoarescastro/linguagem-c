#include <stdio.h>

int main() {

    int num1, num2;
    char operador;

    printf("Digite dois números seguido da operação: ");
    scanf("%d %d %c", &num1, &num2, &operador);

    switch(operador){
        case '+':
        printf("%d + %d = %d", num1, num2, num1+num2);
        break;

        case '-':
        printf("%d - %d = %d", num1, num2, num1-num2);
        break;

        case '/':
        printf("%d / %d = %d", num1, num2, num1/num2);
        break;

        case '*':
        printf("%d * %d = %d", num1, num2, num1*num2);
        break;

        default:
            printf("Operação inválida.");
    }

    return 0;
}