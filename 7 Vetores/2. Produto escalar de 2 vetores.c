#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 2

int main(void)
{
    int vetor1[tam], vetor2[tam], i, produto = 0;

    system("cls");
    setlocale(LC_ALL, "portugues");

    printf("\n\n Entre com os valores do vetor 1 \n\n");

    for (i = 0; i < tam; i++)
    {
        printf("Elemento %d = ", i);
        scanf("%d", &vetor1[i]);
        getchar();
    }
    printf("\n Entre com os valores do vetor 2 \n\n");
    for (i = 0; i < tam; i++)
    {
        printf("Elemento %d = ", i);
        scanf("%d", &vetor2[i]);
        getchar();
    }

    for (i = 0; i < tam; i++)
        produto += vetor1[i] * vetor2[i];

    printf("\n O produto escalar dos dois vetores e: %d", produto);

    printf("\n\n\n");
    system("pause");
    return 0;
}
