#include <stdio.h>

void main(){

    int x;
    printf("Digite um n�mero: ");
    scanf("%d", &x);

    if (x != 10){
        x = 10;
}
    printf("O n�mero digitado foi: %d", x);
}
