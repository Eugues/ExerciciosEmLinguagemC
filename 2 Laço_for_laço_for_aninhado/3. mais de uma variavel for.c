#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int i, j;

    system("cls");
    setlocale(LC_ALL, "portuguese");

    for (i = 0, j = 0; i + j <= 100; i++, j++)
    {
        printf("%d\n", i + j);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
