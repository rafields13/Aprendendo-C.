#include <stdio.h>

void main() {

    // 1. Faça um programa que receba 3 valores e armazene-os em vetores, após isso mostre os valores na tela.

    float vetor[3];
    int i = 0;

    for (i = 0; i < 3; i ++) {

        printf("Digite um número para ser armazenado na lista, por favor: ");
        scanf("%f", &vetor[i]);

    }

    for (i = 0; i < 3; i ++) {

        printf("Os valores das posições %d são %f. \n", i, vetor[i]);

    }

    // 2. Faça um programa que receba 5 valores e armazene-os em vetores, após isso mostre os valores na tela de saída, mas se o valor for positivo mostre-o sendo negativo.

    float vetor[5];
    int i = 0;

    for (i = 0; i < 5; i ++) {

        printf("Digite um número para ser armazenado na lista, por favor: ");
        scanf("%f", &vetor[i]);

    }

    for (i = 0; i < 5; i ++) {

        if (vetor[i] > 0) {

            printf("Os valores das posições %d são  - %f. \n", i, vetor[i]);

        } else {

            printf("Os valores das posições %d são %f. \n", i, vetor[i]);

        }

    }

    // 3. Escrever um programa que solicita ao usuário um conjunto de 4 valores reais (usando define) e verifica quantos estão acima da média (duas casas decimais).

    #define MAX 4

    float vetor[MAX];
    float m = 0;
    int i = 0;
    int cont = 0;

    for (i = 0; i < MAX; i ++) {

        printf("Digite um número para ser armazenado na lista, por favor: ");
        scanf("%f", &vetor[i]);

        m += vetor[i];

    }

    m /= MAX;
    printf("A média é: %.2f. \n", m);

    for (i = 0; i < MAX; i ++) {

        if (vetor[i] > m) {

            cont ++;

        }

    }

    printf("%d número(s) estão acima da média. \n", cont);

    // 4. Faça um programa que receba 10 números em um vetor, calcule a média dos 10 e depois imprima a média com 2 casas decimais.

    #define MAX 10

    float vetor[MAX];
    float m = 0;
    int i = 0;

    for (i = 0; i < MAX; i ++) {

        printf("Digite um número para ser armazenado na lista, por favor: ");
        scanf("%f", &vetor[i]);

        m += vetor[i];

    }

    m /= MAX;
    printf("A média é: %.2f. \n", m);

}
