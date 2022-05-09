#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    system("cls");
    setlocale(LC_ALL, "portuguese");

    printf("%d\n", 5+2);    // 7
    printf("%d\n", 9-4);    // 5
    printf("%d\n", 2*3);    // 6
    printf("%d\n", 10/5);   // 2
    printf("%d\n", 9%4);    // 1
    
    printf("\n\n\n");
    system("pause");
    return 0;
}
