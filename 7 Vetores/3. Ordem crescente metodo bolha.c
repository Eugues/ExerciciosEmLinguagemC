#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 5
#define falso 0
#define verdadeiro 1

int main(void)
{
    int vetor[tam], i, change = falso, final = tam, temp;

    system("cls");
    printf("\n Entre com um vetor de %d elementos \n", tam);
    printf("\n Vetor em ordem aleatoria. \n\n");

    for (i = 0; i < tam; i++)
    {
        printf(" Elemento %d = ", i);
        scanf("%d", &vetor[i]);
        getchar();
    }

    do
    {
        change = falso;
        for (i = 0; i < final; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                change = verdadeiro;
            }
        }

    } while (change);
    printf("\n Vetor em ordem crescente. \n\n");
    for (i = 0; i < tam; i++)
        printf(" %d", vetor[i]);

    printf("\n\n\n");
    system("pause");
    return 0;
}