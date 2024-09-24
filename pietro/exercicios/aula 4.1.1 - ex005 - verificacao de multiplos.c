#include <stdio.h>

int main(){

    int num1;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    if ((num1 % 3) == 0 && (num1 % 5) == 0){
        printf("O número %d, é divisivel por 3 e 5.", num1);
    } else if ((num1 % 3) == 0 && (num1 % 5) != 0) {
        printf("O número %d, é divisivel somente por 3.", num1);
    } else if ((num1 % 3) != 0 && (num1 % 5) == 0) {
        printf("O número %d, é divisivel somente por 5.", num1);
    } else {
        printf("O número %d, não é divisel por 3 e 5.", num1);
    }

}