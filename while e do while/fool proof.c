#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int opcao = 1;

    system("cls");
    setlocale(LC_ALL, "portuguese");

    do
    {
        printf("\nDigite 1 para 'sim' e 2 para 'nao' : ");
        scanf("%d", &opcao);
        getchar();
    } while (opcao < 1 || opcao > 2);


printf("\n\n\n");
system("pause");
return 0;
}
