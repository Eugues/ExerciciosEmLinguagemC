#include <stdio.h>

/*
    Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado
seja maior que 20, este deverá ser apresentado somando-se a ele mais 8;
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-
se 5.

 */

int main(void)
{
    int num1, num2, soma;

    system("cls");
    printf("\n\n Digite 1 numero: ");
    scanf(" %d", &num1);
    getchar();

    printf("\n Digite 2 numero: ");
    scanf("%d", &num2);
    getchar();

    soma = num1 + num2;
    printf("\n");
    if (soma > 20)
    {
        printf(" %d + %d = %d ", num1, num2, soma);
        printf("\n soma maior que 20, sera acrescentado mais 8: ");
        printf("\n %d + 8 = %d\n\n\n", soma, soma + 8);
    }
    else
    {
        printf(" %d + %d = %d ", num1, num2, soma);
        printf("\n Soma menor que 20, sera subtraido 5: ");
        printf("\n %d - 5 = %d", soma, soma - 5);
    }
    printf("\n\n\n");
}