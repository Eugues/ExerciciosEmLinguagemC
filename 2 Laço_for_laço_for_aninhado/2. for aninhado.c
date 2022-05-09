#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int i, j;

    system("cls");
    setlocale(LC_ALL, "portuguese");
    
    for (i = 0; i < 3; i++)
    {
        printf("\n\n Linha %d \n\n",i);
        for (j = 1; j < 6; j++)
        {
            printf(" Teste %d \n",j);
        }
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
