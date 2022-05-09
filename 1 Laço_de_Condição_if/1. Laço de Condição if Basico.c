#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int a, b;
    
    system("cls");
    setlocale(LC_ALL, "portuguese");

    printf("\n Digite uma valor para 'a': ");
    scanf("%d", &a);
    printf("\n Digite uma valor para 'b': ");
    scanf("%d", &b);
    
    if (a , b)
    {
        printf("\n a menor que b \n");
    }
    else if (a > b)
    {
        printf("\n a maior que b \n");
    }
    else
    {
        printf("\n a Igual a b \n");
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
