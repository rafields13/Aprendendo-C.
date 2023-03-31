#include <stdio.h>

    // 1. Crie uma função que mostre → “ Hello World ”. (Essa função deve ser chamada 6 vezes).

int hello_world() {

    printf("Hello World!\n");
    return 0;

    }

void main() {

hello_world();
hello_world();
hello_world();
hello_world();
hello_world();
hello_world();

}

    // 2. Criem uma função que receba o caractere da variável y do usuário e imprima esse comando → "O caractere que você escolheu foi: %c.". (Essa função deve ser chamada 5 vezes).

int x() {

    char y;
    printf("Digite uma letra: ");
    scanf("%c", &y);
    printf("O caractere que você escolheu foi: %c.\n", y);
    return 0;

}

void main() {

x();
x();
x();
x();
x();

}

    // 3. Criem uma função que receba o número x do usuário e se o número for maior que 5 imprima → "x é maior que 5.". (Essa função deve ser chamada 3 vezes).

int y() {

    int x;
    printf("Digite um número qualquer: ");
    scanf("%d", &x);
    printf("O número escolhido foi: %d.\n", x);

    if (x > 5) {
    printf("%d é maior que 5.\n", x);
    }

    else if (x < 5) {
    printf("%d é menor que 5.\n", x);
    }

    else {
    printf("%d é igual a 5.\n", x);
    }

    return 0;

}

void main() {

y();
y();
y();

}

    // 4. Criem uma função que receba um desses 5 caracteres  minúsculos → [a, b, c, d, e] do usuário, imprima e transforme-o em caractere maiúsculo → [A, B, C, D, E]. (Essa função deve ser chamada 3 vezes). (Usem o <switch case> e não é preciso usar a tabela ASCII).

int y() {

    int x;

    printf("\t Você pode escolher uma das letras abaixo digitando seu número correspondente do Menu! \n");
    printf("\t =============================================== \n");
    printf("\t I                   Menu                      I \n");
    printf("\t =============================================== \n");
    printf("\t 1 - a \n");
    printf("\t 2 - b \n");
    printf("\t 3 - c \n");
    printf("\t 4 - d \n");
    printf("\t 5 - e \n");
    printf("\t =============================================== \n");

    printf("Escolha uma das letras digitando seu respectivo número do Menu: ");
    scanf("%d", &x);

    switch (x) {

    case 1:
    printf("A letra escolhida em forma maiúscula é: A.");
    break;

    case 2:
    printf("A letra escolhida em forma maiúscula é: B.");
    break;

    case 3:
    printf("A letra escolhida em forma maiúscula é: C.");
    break;

    case 4:
    printf("A letra escolhida em forma maiúscula é: D.");
    break;

    case 5:
    printf("A letra escolhida em forma maiúscula é: E.");
    break;

    default:
    printf("Operação inválida!");

    }

    return 0;

}

void main() {

y();
y();
y();

}

    // 5. Faça uma função que aceita 2 inteiros e retorna a multiplicação.

int add(int a, int b) {
   return a * b;
};

void main() {

   int x;
   printf("Digite um número: ");
   scanf("%d", &x);
   printf("O número escolhido foi: %d.\n", x);

   int y;
   printf("Digite outro número: ");
   scanf("%d", &y);
   printf("O outro número escolhido foi: %d.\n", y);

   printf("Multiplicação: %d\n", add(x, y));

}

    // 6. Faça uma função que receba um número inteiro e mostre na tela se ele for múltiplo de 2.

int y() {

    int x;
    printf("Digite um número inteiro, por favor: ");
    scanf("%i", &x);
    printf("O número inteiro escolhido foi: %i.\n", x);

    if (x % 2 == 0) {
    printf("%i é um número múltiplo de 2.\n", x);
    }

    else {
    printf("%i não é múltiplo de 2.\n", x);
    }

    return 0;

}

void main() {

y();

}

    // 7. Faça uma calculadora que receba números inteiros. Posteriormente chame a operação a ser feita com esses números e então retorne o resultado. Utilize o <switch case>.

int add(int a, int b) {
    return a + b;
};

int subtract(int a, int b) {
    return a - b;
};

int multiply(int a, int b) {
    return a * b;
};

int divide(int a, int b) {
    return a / b;
};

int main() {

     int n1, n2;
     printf("Entre com o primeiro número: ");
     scanf("%i", &n1);

     printf("Entre com o segundo número: ");
     scanf("%i", &n2);

     int op;

     printf("\t Você pode escolher uma das operações abaixo digitando seu número correspondente do Menu! \n");
     printf("\t =============================================== \n");
     printf("\t I                   Menu                      I \n");
     printf("\t =============================================== \n");
     printf("\t 1 - Soma \n");
     printf("\t 2 - Subtração \n");
     printf("\t 3 - Multiplicação \n");
     printf("\t 4 - Divisão \n");
     printf("\t =============================================== \n");

     printf("Escolha uma das operações digitando seu respectivo número do Menu: ");
     scanf("%i", &op);

     int result;

     switch (op) {

     case 1:
     result = add(n1, n2);
     break;

     case 2:
     result = subtract(n1, n2);
     break;

     case 3:
     result = multiply(n1, n2);
     break;

     case 4:
     result = divide(n1, n2);
     break;

     default:
     printf("\nOperação inválida!\n");

    }

     printf("\nResultado: %d\n", result);

     return 0;

}
