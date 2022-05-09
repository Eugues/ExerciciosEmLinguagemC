

/*
    Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado
um número diferente, o programa deverá solicitar uma nova opção.
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