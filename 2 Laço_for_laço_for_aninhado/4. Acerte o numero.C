#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int i;
    system("cls");
    setlocale(LC_ALL, "portuguese");

    for (i = 0; i != 12;)
    {
        printf("\n\tDigite o numero correto: ");
        scanf("%d", &i);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
