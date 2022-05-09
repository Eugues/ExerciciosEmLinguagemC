#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu() // Fun??o menu
{
    int escolha, opcao; //vari?veis inteira

    printf("\n\n\t\tFa?a um programa com Pilhas e Filas est?ticas usando Menu.\n\n"); //Enunciado

    printf("\tSelecione uma op??o:\n\n"); // msg de op??es na tela
    printf("\t\t1- Para Opera??es com Pilhas\n");
    printf("\t\t2- Para Opera??es com Filas\n");
    printf("\t\t3- Sair\n\n");
    printf("\tOpera??o: "); //msg na tela
    scanf("%d", &escolha);  //armazena o valor digitado em escolha
    getchar();
    switch (escolha) //Sele??o de escolha do menu
    {
    case 1:
        while (opcao < 1 || opcao > 6) // while para comando inv?lido
        {
            printf("\n\tSelecione uma op??o:\n\n"); // msg na tela
            printf("\t\t1- Pilhas 1\n");
            printf("\t\t2- Pilhas 2\n");
            printf("\t\t3- Pilhas 3\n");
            printf("\t\t4- Pilhas 4\n");
            printf("\t\t5- Pilhas 5\n");
            printf("\t\t6- Voltar ao Menu Inicial\n");
            printf("\tOpera??o: "); //msg na tela
            scanf("%d", &opcao);    //armazena o valor digitado em opcao
            getchar();
            if (opcao < 1 || opcao > 6) //if para comando inv?lido
            {
                printf("\nComando invalido, tente novamente!\n\n");
                system("pause");
                system("cls");
            }
        }
        switch (opcao) //switch aninhado para comandos de pilhas
        {
        case 1:
            printf("\ncomando 1\n\n\n");
            break;
        case 2:
            printf("\ncomando 2\n\n\n");
            break;
        case 3:
            printf("\ncomando 3\n\n\n");
            break;
        case 4:
            printf("\ncomando 4\n\n\n");
            break;
        case 5:
            printf("\ncomando 5\n\n\n");
            break;
        case 6:
            system("cls");
            menu();
            break;
        }

    case 2:
        while (opcao < 1 || opcao > 6) // while para comando inv?lido
        {
            printf("\n\tSelecione uma op??o:\n\n"); // msg na tela
            printf("\t\t1- Filas 1\n");
            printf("\t\t2- Filas 2\n");
            printf("\t\t3- Filas 3\n");
            printf("\t\t4- Filas 4\n");
            printf("\t\t5- Filas 5\n");
            printf("\t\t6- Voltar ao Menu Inicial\n");
            printf("\tOpera??o: "); //msg na tela
            scanf("%d", &opcao);    //armazena o valor digitado em opcao
            getchar();
            if (opcao < 1 || opcao > 6) //if para comando inv?lido
            {
                printf("\nComando invalido, tente novamente!\n\n");
                system("pause");
                system("cls");
            }
        }
        switch (opcao) //switch aninhado para comandos de filhas
        {
        case 1:
            printf("\ncomando 1\n\n\n");
            break;
        case 2:
            printf("\ncomando 2\n\n\n");
            break;
        case 3:
            printf("\ncomando 3\n\n\n");
            break;
        case 4:
            printf("\ncomando 4\n\n\n");
            break;
        case 5:
            printf("\ncomando 5\n\n\n");
            break;
        case 6:
            system("cls");
            menu();
            break;
        }
        // Fim switch aninhado
    case 3:
        system("exit");
        printf("\nFinalizando...\n\n");
        system("pause");
        break;
    default:
        printf("\nComando invalido, tente novamente!\n\n");
        system("pause");
        system("cls");
        menu();
        break;
    }
}

int main() //funcao principal
{
    setlocale(LC_ALL, "portuguese");
    menu();          //chama o menu
    system("pause"); //pausa
    return 0;        //retorna que esta tudo OK
}
