

/*
    Fa�a um programa que implemente um menu onde o usur�rio dever� selecionar 1 ou 0. Caso seja entrado
um n�mero diferente, o programa dever� solicitar uma nova op��o.
*/

#include <stdio.h>
int main()
{
    int opcao;
    do
    {
        printf("Entre com 1 para sim e 0 para nao\n");
        scanf("%d", &opcao);
    } while (opcao != 1 && opcao != 0);
    printf("A sua opcao foi: %d", opcao);
    getch();
}