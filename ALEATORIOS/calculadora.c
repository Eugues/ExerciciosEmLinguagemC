#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça uma calculadora em "c" que leia dois números e o usuario tenha 4 funções
(adição , subtração, multiplicação , divisão)
possiveis para fazer operações com os dois numeros digitados...
*/

void soma()
{                                             //funcao de soma
    float valor1, valor2, result;             //declaração de variaveis
    printf("\nDigite o 1 valor: ");           //pede um valor
    scanf("%f", &valor1);                     //armazena o valor
    printf("Digite o 2 valor: ");             //pede outro valor
    scanf("%f", &valor2);                     //armazena o valor em um float
    result = valor1 + valor2;                 //soma valor1 com valor 2 e coloca em result
    printf("\nResultado: %.2f\n\n ", result); //mostra o resultado
    system("pause");                          //pausa pra dar tempo de ver
    system("cls");                            //limpa a tela apos precinado enter
    menu();                                   //chama o menu novamente
}
void subtrai()
{                                             //funcao subtração
    float valor1, valor2, result;             //variaveis
    printf("\nDigite o 1 valor: ");           //pedi variavel
    scanf("%f", &valor1);                     //armazena variavel
    printf("Digite o 2 valor: ");             //pedi variavel
    scanf("%f", &valor2);                     //armazena variavel
    result = valor1 - valor2;                 //subtrai os valor 1 de 2 e armazena em result
    printf("\nResultado: %.2f\n\n ", result); //mostra o resultado
    system("pause");                          //pausa
    system("cls");                            //limpa
    menu();                                   //chama menu
}
void divide()
{ //funcao divide
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf("%f", &valor2);
    result = valor1 / valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system("pause");
    system("cls");
    menu();
}
void multiplica()
{ //funcao multiplica
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf("%f", &valor2);
    result = valor1 * valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system("pause");
    system("cls");
    menu();
}
void menu()
{                //menu
    int escolha; //variavel inteira

    printf("\n\n\t\tBem vindo a calculadora em C\n\n"); //imprime msg na tela \n = salta linha

    printf("\tSelecione uma operação matemática:\n\n"); // msg na tela
    printf("\t\t1- Adição\n");
    printf("\t\t2- Subtração\n");
    printf("\t\t3- Divisão\n");
    printf("\t\t4- Multiplicação\n");
    printf("\t\t5- Sair\n\n");
    printf("\tOperação: "); //msg na tela
    scanf("%d", &escolha);  //armazena o int digitado em escolha

    switch (escolha)
    {           //funcao de selecao de escolha do ,menu
    case 1:     //caso digitado 1 execute isto:
        soma(); //funcao soma feita anteriomente acima
        break;  //termina a funcao de soma

    case 2:
        subtrai();
        break;

    case 3:
        divide();
        break;

    case 4:
        multiplica();
        break;

    case 5:                             //caso selecionado 5 executa:
        system("exit");                 // fechar o programa
        printf("\nFinalizando...\n\n"); //da uma msg na tela
        break;                          // termina a funcao 5 selecionada

    default:                            // caso nao se digite nenhum do case disponoveis execute
        printf("\nComando invalido, tente novamente!\n\n"); //msg
        system("pause");                                    //pausa
        system("cls");                                      //limpa
        menu();                                             //volta pro menu inicial
        break;                                              //termina funcao
    }
}

int main() //funcao principal
{
    setlocale(LC_ALL, "portuguese");
    menu();          //chama o menu
    system("pause"); //pausa
    return 0;        //retorna que esta tudo OK
}