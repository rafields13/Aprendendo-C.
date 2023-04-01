#include <stdio.h>

void main() {

    // 1. Escreva um algoritmo que solicita ao usuário N idades, o  programa apenas leva em conta idades maiores ou iguais que 18. E ao final do código deve mostrar o número de usuários que tem 18 anos ou mais. O programa deve solicitar valores até que o usuário entre com -1. (Usando while).

    int cont = 0;
    int x = 0;

    while (x != -1) {
        printf("Digite sua idade aqui, por favor: ");
        scanf("%i", &x);
        if (x >= 18) {
            cont++;
        }

    }

    printf("%i", cont);

    // 2. Escreva um algoritmo que solicita ao usuário N idades, o  programa deve calcular a média das idades digitas. E ao final do código mostrar a média. O programa deve solicitar valores até que o usuário entre com -1. (Usando do while).

    int cont = 0;
    int idade = 0;
    int média = 0;
    int cont_idade = 0;

    do {
        printf("Digite sua idade aqui, por favor: ");
        cont ++;
        cont_idade += idade;
        scanf("%i", &idade);
    } while (idade != -1);
    média = cont_idade / (cont - 1);
    printf("%d", média);

    // 3. Achar o maior e o menor número de uma série de números fornecidos pelo usuário via teclado. O programa deve solicitar valores até que o usuário entre com -1. (Usando while e condicionais).

       int x = 0;
       int menor = 1000000000;
       int maior = -1;

       printf("Digite -1 caso já tiver colocado todos os números de sua vontade.\n");

   do {

       printf("Digite um número, por favor: ");
       scanf("%d",&x);

       if (x > maior) {
       maior = x;

       }

       if (x < menor && x != -1) {
       menor = x;

       }

      } while(x != -1);

     printf("O maior número digitado pelo usuário foi: %d.\n", maior);
     printf("O menor número digitado pelo usuário foi: %d.", menor);

}
