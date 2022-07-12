/*
    Lista 03 - Exerc�cio 37
    Exiba  o  menu  abaixo  at�  o  usu�rio  entrar  com  a  op��o  4.  
    Para  cada  item  selecionado,  leia  um n�mero inteiro n e execute a op��o escolhida pelo usu�rio. 
    MENU DE OP��ES: 
    1-Verificar se N � primo 
    2-Verificar se N � perfeito 
    3-Verificar se N � capicua 
    4-Sair do programa
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 37\n");

    int opcao = 0, n = 0, soma = 0, n_invertido = 0;

    do
    {
        printf("\nMENU DE OP��ES:");
        printf("\n1-Verificar se N � primo");
        printf("\n2-Verificar se N � perfeito");
        printf("\n3-Verificar se N � capicua");
        printf("\n");

        printf("\nDigite uma op��o: ");
        scanf("%d", &opcao);

        if (opcao >= 1 &&  opcao <= 3)
        {
            printf("\nDigite um n�mero inteiro positivo: ");
            scanf("%d", &n);

            switch (opcao)
            {
                case 1:
                    if ((n == 1 || n == 2 || n == 3 || n == 5 || n == 7) || (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0))
                    {
                        printf("\nO n�mero %d � primo", n);
                        printf("\n");
                    }

                    else
                    {
                        printf("\nO n�mero %d n�o � primo", n);
                        printf("\n");
                    }

                    break;

                case 2:
                    for (int i = 1; i <= n; i++)
                        if (n % i == 0 && n != i)
                            soma += i;
                    
                    if (soma == n)
                    {
                        printf("\nO n�mero %d � perfeito", n);
                        printf("\n");
                    }

                    else
                    {
                        printf("\nO n�mero %d n�o � perfeito", n);
                        printf("\n");
                    }

                    break;

                case 3:
                    for (int i = n; i > 0; i /= 10)
                    n_invertido = n_invertido * 10 + i % 10;

                    if (n == n_invertido)
                    {
                        printf("\nO n�mero %d � capicua", n);
                        printf("\n");
                    }

                    else
                    {
                        printf("\nO n�mero %d n�o � capicua", n);
                        printf("\n");
                    } 

                    break;
            }
        }

        else if (opcao < 1 || opcao > 4)
        {
            printf("\nOp��o Inv�lida");
            printf("\n");
        }

    } while (opcao != 4);

    printf("\n\n");
}