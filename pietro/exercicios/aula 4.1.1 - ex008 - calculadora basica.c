#include <stdio.h>

int main(){

    int num1, num2;
    char operador;

    printf("Digite dois números e um operador, separados por espaço. (Exmeplo: 5 10 +): ");
    scanf("%d %d %c", &num1, &num2, &operador);

    if (operador == '+'){
        printf("Resultado: %d\n", num1+num2);
    } else if (operador == '-'){
        printf("Resultado: %d\n", num1-num2);
    } else if (operador == '/') {
        if (num2 != 0){
            printf("Resultado: %d", num1/num2);
        } else {
            printf("Divisão por zero não é permitida!\n");
        }
    } else if (operador == '*'){
        printf("Resultado: %d\n", num1*num2);
    } else {
        printf("Operação inválida!\n");
    }

    return 0;

}