#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int variavel = 300;
    int *ponteiro;
    int exibe;

    system("cls");
    setlocale(LC_ALL, "portuguese");

    ponteiro = &variavel;
    exibe = *ponteiro;
    printf("\n %d eh o conteudo armazenado no endereco de memoria com ponteiro \n", exibe);

    printf("\n\n\n");
    system("pause");
    return 0;
}
