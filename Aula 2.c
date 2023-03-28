#include <stdio.h>

void main(){

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x != 10){
        x = 10;
}
    printf("O número digitado foi: %d", x);
}
