#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    system("cls");
    setlocale(LC_ALL, "portuguese");
    
    int a = 0, b = 0, c= 0, d = 0;

    a++;

    b--;
    
    c = 1;
    
    c += a;
    
    d -= c;

    printf(" a = %d\n b =%d\n c = %d\n d =%d\n ", a, b, c, d);
    printf("\n\n\n");
    system("pause");
    return 0;
}
