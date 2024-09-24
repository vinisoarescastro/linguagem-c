#include <stdio.h>

#define ANO_ATUAL 2024

int main(){

    int anoNascimento;

    printf("Digite o ano do nascimento: ");
    scanf("%d", &anoNascimento);

    if ( (ANO_ATUAL - anoNascimento) < 18){
        printf("Você é menor de idade!");
    } else {
        printf("Você é maior de idade!");
    }

}