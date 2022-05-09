#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char regiao, vendedor;

    system("cls");
    printf("\n\n\tRegioes: Leste, Oeste e Norte\n");
    printf("\nInforme a primeira letra da regiao: ");
    regiao = getche();

    regiao = toupper(regiao);
    printf("\n");

    switch (regiao)
    {
    case 'L':
        printf("\nVendedores: Ricardo, Jose e Mariana \n");
        printf("\nInforme a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor)
        {
        case 'R':
            printf("\nVendas: R$ %d \n", 5000);
            break;
        case 'J':
            printf("\nVendas: R$ %d \n", 15000);
            break;
        case 'M':
            printf("\nVendas: R$ %d \n", 18000);
            break;
        } // Fim switch aninhado
        break;

    case 'O':
        printf("\nVendedores: Rafael, Joana e Pedro \n");
        printf("\nInforme a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor)
        {
        case 'R':
            printf("\nVendas: R$ %d \n", 2000);
            break;
        case 'J':
            printf("\nVendas: R$ %d \n", 8000);
            break;
        case 'P':
            printf("\nVendas: R$ %d \n", 19000);
            break;
        } // Fim switch aninhado
        break;

    case 'N':
        printf("Vendedores: Fabiana, Gabriela e Roberto \n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getche());
        printf("\n");

        switch (vendedor)
        {
        case 'F':
            printf("\nVendas: R$ %d \n", 3000);
            break;
        case 'G':
            printf("\nVendas: R$ %d \n", 4000);
            break;
        case 'R':
            printf("\nVendas: R$ %d \n", 13000);
            break;
        } // Fim switch aninhado
        break;

    } // Fim switch

    system("PAUSE");
    return 0;
}