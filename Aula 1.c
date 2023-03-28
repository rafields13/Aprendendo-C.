#include <stdio.h>

#include <locale.h>

#include <math.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    // 1. Faça um programa que possua uma variável com um valor inteiro, some esse valor com 9 e o imprima na tela.

    int x = 11;
    x = x + 9;
    printf("O valor obtido foi: %d.", x);

    // Pode também ser feito dessa maneira:

    int y = 11, respostaI;
    respostaI = y + 9;
    printf("O valor obtido foi: %d.", respostaI);

    // 2. Faça um programa que tenha um valor flutuante de x = 8.4, multiplique esse valor por 2 e mostre o resultado na tela.

    float z = 8.4, respostaII;
    respostaII = z * 2;
    printf("O valor obtido foi: %f.", respostaII)

    //3. Faça um programa que recebe um valor inteiro [ scanf("%d", &variavel) ], soma esse valor com 9, salva na própria variavel e o mostre na tela.

    int num;
    printf("Escolha um número qualquer: ");
    scanf("%d", &num);
    printf("O número escolhido foi: %d.\n", num);
    num = num + 9;
    printf("A soma da variável com 9 é: %d.", num);

    // 4. Faça um programa que recebe um valor  flutuante [ scanf("%f", &variavel) ] multiplica esse valor por 2, salva na própria memória da variável e no final imprime o valor com até duas casas decimais [ printf("%.2f", &variavel) ] .

    float r;
    printf("Escolha um número qualquer: ");
    scanf("%f", &r);
    printf("O número selecionado foi: %f.\n", r);
    r = r * 2;
    printf("O valor multiplicado por 2 com até duas casas decimais é: %.2f", r);

    // 5. Receba um valor em Real (R$) (float) e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$).

    float real;
    printf("Digite o valor que você que fazer o câmbio (em R$): ");
    scanf("%f", &real);
    printf("Você tem R$%.2f.\n", real);

    float usd = real / 5;
    printf("Você tem $%.2f.\n", usd);

    float euro = real / 5.2;
    printf("Você tem %.2f euros.\n", euro);

    // 6. Faça um programa que receba dois valores float: um de altura e um de peso, para calcular o IMC. Por fim mostre o resultado.

    float altura;
    printf("Digite aqui sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f metro(s).\n", altura);

    float peso;
    printf("Digite aqui seu peso: ");
    scanf("%f", &peso);
    printf("Seu peso é: %.2f kg(s).\n", peso);

    float imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f.\n", imc);

    // 7. Receba (input) o valor de um salário e mostre o quanto deve ser depositado de FGTS (8% do valor salário) para este salário informado.

    float sal;
    printf("Digite aqui seu salário: ");
    scanf("%f", &sal);
    printf("Seu salário é de R$%.2f.\n", sal);

    float fgts = sal * 0.08;
    printf("O valor depositado de FGTS deve ser de R$%.2f.\n", fgts);
}
