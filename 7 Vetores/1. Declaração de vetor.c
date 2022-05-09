#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

int main(void)
{
    int vetor[tam];
    unsigned i, numero;

    system("cls");
    setlocale(LC_ALL, "portuguese");
    printf("\n Entrar com numero inicial: ");
    scanf("%d", &numero);
    getchar();

    // Gerar vertor
    for (i = 0; i < tam; i++)
        vetor[i] = numero++;

    // Imprimir vetor
    for (i = 0; i < tam; i++)
        printf("Elemento %d = %d \n", i, vetor[i]);

    printf("\n\n\n");
    system("pause");
    return 0;
}
