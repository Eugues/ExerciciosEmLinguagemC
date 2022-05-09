#include <stdio.h>
#include <math.h>

/*
    Entrar com um número e imprimir a raiz quadrada do número
    caso ele seja positivo e o quadrado do número caso ele seja negativo.

*/
int main(void)
{
    float num, raiz_quadrada, potencia;

    system("cls");
    printf("\n\n Digite 1 numero: ");
    scanf("%f", &num);
    getchar();

    if (num >= 0)
    {
        raiz_quadrada = sqrt(num);
        printf("\n Raiz quadrada de %.f e: %.f", num, raiz_quadrada);
    }
    else
    {
        potencia = pow(num, 2);
        printf("\n potencia de %.f e: %.f", num, potencia);
    }
}
