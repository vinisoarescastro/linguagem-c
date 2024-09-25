#include <stdio.h>

int main() {

    int nota;

    printf("Entrada: ");
    scanf("%d", &nota);

    char categoria;

    if (nota >= 0 && nota < 60){
        categoria = 'F';
    } else if (nota < 70) {
        categoria = 'D';
    } else if (nota < 80) {
        categoria = 'C';
    } else if (nota < 90) {
        categoria = 'B';
    } else if (nota <= 100) {
        categoria = 'A';
    } else {
        categoria = 'E';
    }

    switch (categoria) {
        case 'F':
        printf("Nota F.\n");
        break;

        case 'D':
        printf("Nota D.\n");
        break;

        case 'C':
        printf("Nota C.\n");
        break;

        case 'B':
        printf("Nota B.\n");
        break;

        case 'A':
        printf("Nota A\n");
        break;

        case 'E':
        printf("Entrada inválida.\n");
        break;

        default:
        printf("Error.\n");
        break;

    }

    return 0;

}