#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIML 3
#define DIMC 3

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "portuguese");
    int i, j;
    int matriz[DIML][DIMC];
    for (i = 0; i < DIML; i++)
    {
        printf("\n Digite os Elementos da %d? linha da Matriz. \n", i + 1);
        for (j = 0; j < DIMC; j++)
        {
            printf("\n %d? Elemento da  linha da Matriz: ", j + 1);
            scanf("%d", &matriz[i][j]);
            getchar();
        }
    }
    printf("\n");
    for (i = 0; i < DIML; i++)
    {
        for (j = 0; j < DIMC; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}