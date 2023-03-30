#include <stdio.h>

#include <locale.h>

#include <math.h>

#include <stdlib.h>

void main () {

    setlocale(LC_ALL, "Portuguese");

    // 1. O professor aplicou a avaliação em sua turma e deseja mostrar se o aluno foi aprovado (nota maior ou igual a 5) ou reprovado(nota menor que 5). Desenvolva o programa que leia a nota do aluno e gere a tela de saída com as informações solicitadas.

    // Entrada 1: Nota: 8.4          			Saída 1: Você foi Aprovado
    // Entrada 2: Nota: 4.9           		    Saída 2: Você foi Reprovado
    // Entrada 3: Nota: 5.0      			    Saída 3: Você foi Aprovado

    short unsigned nota;
    printf("Digite aqui a nota: ");
    scanf("%f", &nota);
    printf("O aluno tirou: %.1f.\n", nota);

    if (nota >= 5) {
            printf("O aluno foi APROVADO!\n");
            } else {
                printf("O aluno foi REPROVADO!\n");
                }

    // Obs: Lembrando que para rodar o programa, a nota deve ser colocada entre vírgula, caso tenha outras casas decimais, pois está "setado" para Língua Portuguesa.

    // 2. Faça um programa que retorna a hora que for digitada e cumprimente de acordo com o horário.

    // Entrada 1: Hora: 5          			    Saída 1: Agora são 5 horas. Boa Madrugada.
    // Entrada 2: Hora: 7           			Saída 2: Agora são 7 horas. Bom Dia.
    // Entrada 3: Hora: 13      			    Saída 3: Agora são 13 horas. Boa Tarde.
    // Entrada 4: Hora: 23      			    Saída 3: Agora são 23 horas. Boa Noite.

    short unsigned hour;
    printf("Digite o horário desejado: ");
    scanf("%i", &hour);
    printf("O horário desejado é: %d hrs.\n", hour);

    if (hour >= 0 && hour < 6) {
            printf("Já são %i hrs da madrugada. VAI DORMIR, MOLEQUE!\n", hour);
    } else if (hour > 5 && hour < 12) {
            printf("ACORDA, MOLEQUE! Já são %i hrs!\n", hour);
    } else if (hour > 11 && hour < 18) {
            printf("Já são %i hrs. VAI ESTUDAR, MOLEQUE!\n", hour);
    } else if (hour >= 18 && hour < 23) {
            printf("Já são %i hrs. VAI DESCANSAR, DOIDÃO!\n", hour);
    } else {
            printf("NÃO SABE NEM DIZER QUE HORAS SÃO? VAI ESTUDAAAR MESMOOO!", hour);
            }

    // 3. Crie um programa que receba três notas de 0 até 10 (faça as validações para aceitar apenas esse intervalo), depois faça o cálculo da média aritmética e então mostre a média calculada e também se o aluno passou ou não. A escola aceita notas 7 (sete) acima para aprovação.

    float primeira_prova;
    printf("Digite aqui a nota da primeira prova: ");
    scanf("%f", &primeira_prova);
    printf("O aluno tirou: %.1f.\n", primeira_prova);

    float segunda_prova;
    printf("Digite aqui a nota da segunda prova: ");
    scanf("%f", &segunda_prova);
    printf("O aluno tirou: %.1f.\n", segunda_prova);

    float terceira_prova;
    printf("Digite aqui a nota da terceira prova: ");
    scanf("%f", &terceira_prova);
    printf("O aluno tirou: %.1f.\n", terceira_prova);

    float media;
    media = (primeira_prova + segunda_prova + terceira_prova) / 3;
    printf("A média das notas das provas foi: %.1f.\n", media);

    if (media >= 7) {
            printf("O aluno foi APROVADO!\n");
            } else if (media >= 0 && media < 7) {
                printf("O aluno foi REPROVADO!\n");
                } else {
                    printf("É impossível tirar uma nota menor que zero ou maior que dez.");
                }

    // 4. Desenvolva a função máxima que recebe dois números inteiros e retorna o maior deles. Se os números forem iguais, retorne um deles. A função main (programa) lê dois números, chama a função máxima passando os dois argumentos (os valores lidos) e gera a tela de saída com o valor retornado pela função máxima. Lembre-se de usar o comando <switch>.

    #include <stdio.h>

    int maximo(int x, int y) {
      if (x > y) {
        return x;
      } else if (y > x) {
        return y;
      } else {
        return x;
      }
    }

    int main() {
      int n1, n2, resultado;
      printf("Digite o primeiro número: ");
      scanf("%d", &n1);
      printf("Digite o segundo número: ");
      scanf("%d", &n2);
      resultado = maximo(n1, n2);
      switch (resultado) {
        case 0:
          printf("Os dois números são iguais: %d\n", resultado);
          break;
        default:
          printf("O maior número é: %d\n", resultado);
          break;
      }
      return 0;
    }

    // Obs: Estou rodando todos os exercícios em um programa só, aí esse vai ter que copiar e colar em um novo arquivo do CodeBlocks pra rodar ele certinho.

    // 5. Escreva um algoritmo que solicita ao usuário dois operandos e um código de operação (1 - Soma, 2 - Subtração, 3 - Divisão ou 4 - Multiplicação) e realiza a operação correspondente sobre os operandos fornecidos pelo usuário:

   float a, b, result;
   int calc;

   printf("Digite um número qualquer para efetuar o cálculo: ");
   scanf("%f", &a);

   printf("Digite outro número qualquer para efetuar o cálculo: ");
   scanf("%f", &b);

   printf("\t Escolha uma das operações abaixo digitando seu número do Menu: \n");
   printf("\t =============================================== \n");
   printf("\t I                   Menu                      I \n");
   printf("\t =============================================== \n");
   printf("\t 1 - Soma \n");
   printf("\t 2 - Subtração \n");
   printf("\t 3 - Divisão ou \n");
   printf("\t 4 - Multiplicação \n");
   printf("\t =============================================== \n");

   printf("Digite o tipo de operação escolhida: ");
   scanf("%d", &calc);

   switch (calc){

       case 1:
           result = a + b;
           printf("A soma é = %.1f. \n", result);
           break;
       case 2:
           result = a - b;
           printf("A subtração é = %.1f. \n", result);
           break;
       case 3:
           result = a / b;
           printf("A divisão é = %.1f. \n", result);
           break;
       case 4:
           result = a * b;
           printf("A multiplicação é = %.1f. \n", result);
           break;
       default:
           printf("Operação inválida!");
   }
}
