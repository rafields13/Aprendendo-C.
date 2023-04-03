#include <stdio.h>

void main() {

// Continuação da Aula 4.

// 1. Faça um programa que pergunte ao usuário “n” vezes se ele gostaria de sair do programa, obs: utilize “s” para condição de saída. (Usando while).


    char x = 'n';

    while (x != 's') {

        printf("Digite s para sair do loop: \n");
        scanf("%c", &x);
        getchar();

    }

        printf("Saindo do loop...");

// 2. Escreva um programa que imprima os números de 1 a 5 usando um loop while. (Usando while).

    int x = 1;

    while (x <= 5) {

        printf("%d \n", x);
        x ++;

    }

    printf("Saindo do loop...");

}
