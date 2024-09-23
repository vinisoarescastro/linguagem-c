#include <stdio.h>

int main(){
    
    int dado;

    printf("Digite um número: ");
    scanf("%d", &dado);


    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do decremento: %d.\n", dado);

    dado += 3;
    printf("Depois do incremento de 3 unidades: %d.\n", dado);

    dado -= 2;
    printf("Depois do incremento de 2 unidades: %d.\n", dado);

    dado *=10;
    printf("Depois de multiplar por 10: %d.\n", dado);
}