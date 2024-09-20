#include <stdio.h>

void menorQuantidadeNotas(int valor, int notas[], int quantNotas[]) {
    int i;
    for (i = 0; i < 6; i++) {
        quantNotas[i] = valor / notas[i];
        valor %= notas[i];
    }
}

void maiorQuantidadeNotas(int valor, int notas[], int quantNotas[]) {
    quantNotas[5] = valor / 2;
    valor %= 2;

    if (valor == 1) {
        quantNotas[5] -= 2;  
        quantNotas[4]++;      
    }
}

int main() {
    float saldo;
    int saque, i;
    int notas[] = {100, 50, 20, 10, 5, 2};  
    int quantNotasMenor[6] = {0};           
    int quantNotasMaior[6] = {0};           
    
    printf("Entre com o saldo da conta a ser sacada (em reais): ");
    scanf("%f", &saldo);
    
    do {
        printf("Entre com o valor do saque (em reais): ");
        scanf("%d", &saque);
        
        if (saque <= 0) {
            printf("Valor do saque invalido\n");
        } else if (saque > (int)saldo) {
            printf("Saldo insuficiente para valor desejado\n");
        }
    } while (saque <= 0 || saque > (int)saldo);

    menorQuantidadeNotas(saque, notas, quantNotasMenor);
    maiorQuantidadeNotas(saque, notas, quantNotasMaior);
    
    saldo -= saque;
    
    printf("\nRESULTADOS\n");
    printf("Valor atualizado do saldo (em reais): %.2f\n", saldo);
    
    printf("\nOpcao de saque 1 (menor quantidade possivel de cedulas):\n");
    for (i = 0; i < 6; i++) {
        if (quantNotasMenor[i] > 0) {
            printf("Cedulas de %d reais: %d\n", notas[i], quantNotasMenor[i]);
        }
    }
    
    printf("\nOpcao de saque 2 (maior quantidade possivel de cedulas):\n");
    for (i = 5; i >= 0; i--) {
        if (quantNotasMaior[i] > 0) {
            printf("Cedulas de %d reais: %d\n", notas[i], quantNotasMaior[i]);
        }
    }
    
    return 0;
}