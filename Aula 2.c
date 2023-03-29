#include <stdio.h>

#include <locale.h>

#include <math.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    //Exercício 1.

    printf("%d", !0&&0||0);

    // Exercício 2. Criem um programa que recebe o número X do usuário e se o número for maior que 5 imprimir → "X é maior que 5.".

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x > 5) {
        printf("%d é maior que 5.", x);
    } else {
    printf("%d não é maior que 5.", x);
           }

    // Exercício 3. Criem um programa que recebe o número X e se o número não for  10 ele vai transformá lo em 10.


    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x != 10){
        x = 10;
}
    printf("O número digitado foi: %d", x);

    // Exercício 4. Criem um programa que recebe o número X e imprime se o número é maior ou menor que dois.

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x < 2 || x > 2){
            printf("%d", x);
            }

    // Exercício 5. Criem um programa que recebe o número X e imprime se o número é maior, menor ou igual a dois.

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x < 2 || x > 2 || x == 2){
            printf("%d", x);
            }

    // Exercício 6. Cria um Algoritmo que verifica se um número é PAR ou IMPAR.

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x%2 == 0) {
        printf("O número escolhido é PAR!");
    } else {
    printf("O número escolhido é ÍMPAR!");
           }
    }
