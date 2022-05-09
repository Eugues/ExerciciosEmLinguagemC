#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    float variavel = 300;
    float *ponteiro;
    float exibe;

    system("cls");
    setlocale(LC_ALL, "portuguese");

    ponteiro = &variavel;
    exibe = *ponteiro;
    printf("\n %.1f eh o conteudo armazenado no endereco de memoria com ponteiro \n", exibe);

    printf("\n\n\n");
    system("pause");
    return 0;
}
