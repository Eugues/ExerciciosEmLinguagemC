#include <stdio.h>

/*
    Entrar com um número e imprimir uma das mensagens: é multiplo de 3 ou não é
multiplo de 3

*/

int main(void)
{
    int num;
    system("cls");
    printf("\n\n Digite 1 numero: ");
    scanf(" %d", &num);
    getchar();
    if (num % 3 == 0)
    {
        printf("\n Multiplo de 3 \n\n");
    }
    else
    {
        printf("\n Nao e Multiplo de 3 \n\n");
    }
}