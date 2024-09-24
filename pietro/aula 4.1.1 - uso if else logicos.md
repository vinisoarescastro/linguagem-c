# Estruturas de Controle: `if`, `else if` e `else` com Operadores Lógicos

As estruturas de controle `if`, `else if` e `else` em C permitem que o programa tome decisões com base em condições. Além de comparações simples, você pode usar operadores lógicos para combinar múltiplas condições.

## Operadores Lógicos

1. **Disjunção (OR)**: `||`
   - A condição é verdadeira se pelo menos uma das subcondições for verdadeira.
   - Exemplo: `if (a > 10 || b < 5)`

2. **Conjunção (AND)**: `&&`
   - A condição é verdadeira apenas se todas as subcondições forem verdadeiras.
   - Exemplo: `if (a > 10 && b < 5)`

3. **Negação (NOT)**: `!`
   - Inverte o valor lógico da condição. Se a condição for verdadeira, torna-se falsa, e vice-versa.
   - Exemplo: `if (!(a > 10))`

## Uso de `if`, `else if` e `else`

A estrutura básica para usar essas condições é a seguinte:

```c
if (condição1) {
    // Código a ser executado se condição1 for verdadeira
} else if (condição2) {
    // Código a ser executado se condição1 for falsa e condição2 for verdadeira
} else {
    // Código a ser executado se ambas as condições forem falsas
}
```

## Exemplo prático

```c

#include <stdio.h>

int main() {
    int a = 12, b = 3;

    if (a > 10 && b < 5) {
        printf("A é maior que 10 e B é menor que 5.\n");
    } else if (a > 10 || b < 5) {
        printf("A é maior que 10 ou B é menor que 5.\n");
    } else {
        printf("Nenhuma das condições é verdadeira.\n");
    }

    return 0;
}


```