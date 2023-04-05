#include <stdio.h>
#include <locale.h>

    void main () {

        setlocale(LC_ALL, "Portuguese");

        // 1. Faça um código que preencha uma matriz com as quantidades de linha e coluna informadas pelo usuário e que cada elemento seja igual a multiplicação da coordenada da linha pela coordenada da coluna.

        int linha, coluna = 0;
        printf("Digite o número de linhas e de colunas da matriz RESPECTIVAMENTE, por favor:\n");
        scanf("%d %d", &linha, &coluna);

        int matriz[linha][coluna];

        for (int i = 0; i < linha; i ++) {

            for (int j = 0; j < coluna; j ++) {

                matriz[i][j] = i * j;

            }

        }

        printf("\nMatriz gerada:\n\n");

        for (int i = 0; i < linha; i ++) {

            for (int j = 0; j < coluna; j ++) {

                printf("[%d]", matriz[i][j]);

            }

            printf("\n");

        }

    }
