#include <stdio.h>

#include <locale.h>

#include <math.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    // 1. Fa�a um programa que possua uma vari�vel com um valor inteiro, some esse valor com 9 e o imprima na tela.

    int x = 11;
    x = x + 9;
    printf("O valor obtido foi: %d.", x);

    // Pode tamb�m ser feito dessa maneira:

    int y = 11, respostaI;
    respostaI = y + 9;
    printf("O valor obtido foi: %d.", respostaI);

    // 2. Fa�a um programa que tenha um valor flutuante de x = 8.4, multiplique esse valor por 2 e mostre o resultado na tela.

    float z = 8.4, respostaII;
    respostaII = z * 2;
    printf("O valor obtido foi: %f.", respostaII)

    //3. Fa�a um programa que recebe um valor inteiro [ scanf("%d", &variavel) ], soma esse valor com 9, salva na pr�pria variavel e o mostre na tela.

    int num;
    printf("Escolha um n�mero qualquer: ");
    scanf("%d", &num);
    printf("O n�mero escolhido foi: %d.\n", num);
    num = num + 9;
    printf("A soma da vari�vel com 9 �: %d.", num);

    // 4. Fa�a um programa que recebe um valor  flutuante [ scanf("%f", &variavel) ] multiplica esse valor por 2, salva na pr�pria mem�ria da vari�vel e no final imprime o valor com at� duas casas decimais [ printf("%.2f", &variavel) ] .

    float r;
    printf("Escolha um n�mero qualquer: ");
    scanf("%f", &r);
    printf("O n�mero selecionado foi: %f.\n", r);
    r = r * 2;
    printf("O valor multiplicado por 2 com at� duas casas decimais �: %.2f", r);

    // 5. Receba um valor em Real (R$) (float) e mostre a convers�o para D�lar(5 R$) e Euro(5.2 R$).

    float real;
    printf("Digite o valor que voc� que fazer o c�mbio (em R$): ");
    scanf("%f", &real);
    printf("Voc� tem R$%.2f.\n", real);

    float usd = real / 5;
    printf("Voc� tem $%.2f.\n", usd);

    float euro = real / 5.2;
    printf("Voc� tem %.2f euros.\n", euro);

    // 6. Fa�a um programa que receba dois valores float: um de altura e um de peso, para calcular o IMC. Por fim mostre o resultado.

    float altura;
    printf("Digite aqui sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura �: %.2f metro(s).\n", altura);

    float peso;
    printf("Digite aqui seu peso: ");
    scanf("%f", &peso);
    printf("Seu peso �: %.2f kg(s).\n", peso);

    float imc = peso / (altura * altura);
    printf("Seu IMC �: %.2f.\n", imc);

    // 7. Receba (input) o valor de um sal�rio e mostre o quanto deve ser depositado de FGTS (8% do valor sal�rio) para este sal�rio informado.

    float sal;
    printf("Digite aqui seu sal�rio: ");
    scanf("%f", &sal);
    printf("Seu sal�rio � de R$%.2f.\n", sal);

    float fgts = sal * 0.08;
    printf("O valor depositado de FGTS deve ser de R$%.2f.\n", fgts);
}
