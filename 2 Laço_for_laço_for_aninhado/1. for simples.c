#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    system("cls");
    setlocale(LC_ALL, "portuguese");
    
    int i;

    for (i = 0; i < 10; i++)
    {
        printf(" Linha %d \n",i);
    }
    
    printf("\n\n\n");
    system("pause");
    return 0;
}
