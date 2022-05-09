#include <stdio.h>
/*
    Entrar com um número e informar se ele é ou não divisível por 5.
*/

int main(void)
{

    int num;
    system("cls");
    printf("\n Digite 1 numero: ");
    scanf("%d", &num);
    getchar();
    if (num % 5 == 0)
    {
        printf("\n Numero e divisivel por 5 \n\n");
    }
    else
    {
        printf("\n Nao e divisivel por 5 \n\n");
    }
}