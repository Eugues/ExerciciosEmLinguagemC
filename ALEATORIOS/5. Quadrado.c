#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Funcções auxiliares:
void display();
int leitura();
void square();

int main(void)
{
    int valor;

    system("cls");
    setlocale(LC_ALL, "portuguese");

    for (display(); valor = leitura(); display())
    {
        square(valor);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
} // end main

void display()
{

    printf("\n\tDigite Zero para Sair! ");
    printf("\n\tOu Informe um numero inteiro para calcular o  seu quadrado: ");
} // end displa

int leitura()
{
    int t; // numero digitado pelo usuario para calcular seu quadrado
    scanf("%d", &t);
    return t;
} // end leitura

void square(int numero)
{
    printf("\n\tO Quadrado do numero digitado eh: %d\n", numero * numero); // imprime o quadrado do numero
} // end square