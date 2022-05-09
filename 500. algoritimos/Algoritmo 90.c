#include <stdio.h>

/* 
    Entrar com um número e imprimi-lo caso seja maior que 20
*/

int main(void)
{
    int num;
    system("cls");
    printf("\n\n Entre com 1 numero: ");
    scanf("%d", &num);
    getchar();

    if (num > 20)
    {
        printf("\n numero maior que 20. \n\n\n");
    }
}