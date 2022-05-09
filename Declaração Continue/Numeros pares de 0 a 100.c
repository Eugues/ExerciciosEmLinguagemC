#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int x;
    system("cls");
    setlocale(LC_ALL, "portuguese");

    for (x = 0; x <= 100; x++)
    {
        if (x % 2)
            continue;
        printf("%d\n", x);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
