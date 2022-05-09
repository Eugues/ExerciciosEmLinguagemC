#include <stdio.h>

/*
    Construir um algoritmo que leia dois valores numéricos inteiros e efetue a adição;
caso o resultado seja maior que 10, apresentá-lo.

*/

int main(void)
{
    int num1, num2, soma;

    printf("\n\n Entre com 1 numero: ");
    scanf("%d", &num1);
    getchar();

    printf("\n Entre com 2 numero: ");
    scanf("%d", &num2);
    getchar();

    soma = num1 + num2;
    if (soma > 10)
    {
        printf("\n A soma e %d", soma);
    }
}