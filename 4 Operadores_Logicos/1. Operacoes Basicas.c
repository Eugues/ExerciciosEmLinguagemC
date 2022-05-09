#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    
    char a = 1;
    char b = 2;
    char c = 3;
    char d = 1;

    system("cls");
    setlocale(LC_ALL, "portuguese");
    
    if (a > b && a < c)
    {
        printf("Condicao 1 verdadeira \n");
    }

    if (c == d || d==a)
    {
        printf("Condicao 2 verdadeira \n");
    }

    else
    {
        printf("Nenhuma condicao e verdadeira \n");
    } 
    
    printf("\n\n\n");
    system("pause");
    return 0;
}
