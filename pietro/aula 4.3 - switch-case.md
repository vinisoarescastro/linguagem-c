# Estrutura de Controle `switch case` em C

A estrutura de controle `switch case` é uma maneira eficiente de tomar decisões em um programa, especialmente quando você tem várias opções baseadas no valor de uma única variável. É uma alternativa mais organizada ao uso de múltiplos `if-else` quando se lida com uma variável que pode assumir vários valores distintos.

## Estrutura Básica do `switch case`

A estrutura básica do `switch case` é a seguinte:

```c
switch (expressão) {
    case valor1:
        // Código a ser executado se a expressão for igual a valor1
        break;
    case valor2:
        // Código a ser executado se a expressão for igual a valor2
        break;
    // Você pode adicionar mais casos conforme necessário
    default:
        // Código a ser executado se nenhum dos casos acima for verdadeiro
}
```

## Exemplo prático

```c
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7 para o dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido! Digite um número de 1 a 7.\n");
            break;
    }

    return 0;
}

```