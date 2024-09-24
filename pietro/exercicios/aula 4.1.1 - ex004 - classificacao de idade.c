#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ( idade > 60 ) {
        printf("Você é um idoso!");
    } else if ( idade > 18 ) {
        printf("Você é um adulto!");
    } else {
        printf("Você é uma criança!");
    } 
}