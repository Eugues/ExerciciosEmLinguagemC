#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//    conversor de base numérica: decimal para hexadecimal e vice-versa.

int main(void)
{
    int opcao, valor;

    system("cls");
    setlocale(LC_ALL, "portuguese");

    printf("\n\n Converter: \n");
    printf("\n 1: decimal para hexadecimal \n");
    printf("\n 2: hexadecimal para decimal \n");
    printf("\n informe sua opcao ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
        printf("\n informe o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("\n%d em hexadecimal eh: %x \n", valor, valor);
        break;
    case 2:
        printf("\n informe o valor em hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("\n%x em decimal eh : %d \n", valor, valor);
        break;
    default:
        printf("\n opcao invalida");
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
