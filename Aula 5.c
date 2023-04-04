#include <stdio.h>

void main() {

// 1. Faça um programa para imprimir uma contagem regressiva de 100 até 0 de 25 em 25 com For. Um número por linha.

    int i = 100;

    for (i; i >= 0; i -= 25) {

        printf("%d. \n", i);

    }

// 2. Escreva um algoritmo que solicita ao usuário um valor N inteiro positivo e imprime na tela do computador todos os número inteiros de 0 até N digitado. (Usando for)

    int i = 0;
    int n = 0;

    printf("Escolha um número limite: ");
    scanf("%d", &n);

    for (i; i <= n; i ++) {

    printf("%d \n", i);

    }

// 3. Faça um programa que pergunte ao usuário quantos e quais números inteiros serão digitados, e todos os números que forem menores ou igual a 0 devem passar a ser 1. (Usando FOR).

    int i = 1;
    int x = 0;
    int q = 0;

    printf("Escolha quantos números serão, por favor: ");
    scanf("%d", &q);

        for (i; i <= q; i ++) {

            printf("Digite um valor, por favor: ");
            scanf("%d", &x);

        if (x > 0) {

            printf("%d. \n", x);

            } else {

                printf("1. \n");

                }

        }

// 4. Escrever um programa que solicita ao usuário um conjunto de 10 valores reais e mostrar a média dos 10 números.(Usando somente o FOR).

    int i = 0;
    float x = 0;
    float m = 0;

    for (i; i < 10; i ++) {

        printf("Digite um valor qualquer, por favor: ");
        scanf("%f", &x);
        m += x;

    }

    m = m / 10;
    printf("A média é: %.2f", m);

// 5. Escreva um algoritmo que solicita ao usuário N números inteiros, calcule e imprima na tela do computador a média(duas casas decimais) do aluno. (Usando FOR).

    int i0 = 0;
    float x0 = 0;
    float m0 = 0;

    for (i0; i0 < 3; i0 ++) {

        printf("Digite um valor qualquer, por favor: ");
        scanf("%f", &x0);
        m0 += x0;

    }

    m0 = m0 / 3;
    printf("A média é: %.2f \n", m0);

    int i1 = 0;
    float x1 = 0;
    float m1 = 0;

    for (i1; i1 < 2; i1 ++) {

        printf("Digite um valor qualquer, por favor: ");
        scanf("%f", &x1);
        m1 += x1;

    }

    m1 = m1 / 2;
    printf("A média é: %.2f \n", m1);

    int i2 = 0;
    float x2 = 0;
    float m2 = 0;

    for (i2; i2 < 5; i2 ++) {

        printf("Digite um valor qualquer, por favor: ");
        scanf("%f", &x2);
        m2 += x2;

    }

    m2 = m2 / 5;
    printf("A média é: %.2f", m2);

// 6. Crie a tabela de multiplicação do 9 que mostra essa saída:

/*9 x 0 = 0
  9 x 1 = 9
  9 x 2 = 18
  9 x 3 = 27
  9 x 4 = 36
  9 x 5 = 45
  9 x 6 = 54
  9 x 7 = 63
  9 x 8 = 72
  9 x 9 = 81
  9 x 10 = 90*/

// Obs: Use o loop For.

   int i;

   printf("\t Tabuada do 9 \n");

   for(i = 0; i <= 10 ; i++) {

       printf("%d x %d = %d \n", 9, i, 9*i);

   }

}
