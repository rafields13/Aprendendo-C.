#include <stdio.h>

void main() {

// Continua��o da Aula 4.

// 1. Fa�a um programa que pergunte ao usu�rio �n� vezes se ele gostaria de sair do programa, obs: utilize �s� para condi��o de sa�da. (Usando while).


    char x = 'n';

    while (x != 's') {

        printf("Digite s para sair do loop: \n");
        scanf("%c", &x);
        getchar();

    }

        printf("Saindo do loop...");

// 2. Escreva um programa que imprima os n�meros de 1 a 5 usando um loop while. (Usando while).

    int x = 1;

    while (x <= 5) {

        printf("%d \n", x);
        x ++;

    }

    printf("Saindo do loop...");

}
