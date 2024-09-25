#include <stdio.h>

int main() {

    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("O caractere é uma letra maiúscula!\n");
    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("O caractere é uma letra minúscula!\n");
    } else if (caractere >= '0' && caractere <= '9') {
        printf("O caractere é um número!\n");
    } else {
        printf("O caractere é um símbolo.\n");
    }

    return 0; 
}