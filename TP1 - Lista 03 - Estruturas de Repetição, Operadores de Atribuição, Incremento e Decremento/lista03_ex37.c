/*
    Lista 03 - Exercício 37
    Exiba  o  menu  abaixo  até  o  usuário  entrar  com  a  opção  4.  
    Para  cada  item  selecionado,  leia  um número inteiro n e execute a opção escolhida pelo usuário. 
    MENU DE OPÇÕES: 
    1-Verificar se N é primo 
    2-Verificar se N é perfeito 
    3-Verificar se N é capicua 
    4-Sair do programa
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 37\n");

    int opcao = 0, n = 0, soma = 0, n_invertido = 0;

    do
    {
        printf("\nMENU DE OPÇÕES:");
        printf("\n1-Verificar se N é primo");
        printf("\n2-Verificar se N é perfeito");
        printf("\n3-Verificar se N é capicua");
        printf("\n");

        printf("\nDigite uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 &&  opcao <= 3)
        {
            printf("\nDigite um número inteiro positivo: ");
            scanf("%d", &n);

            switch (opcao)
            {
                case 1:
                    if ((n == 1 || n == 2 || n == 3 || n == 5 || n == 7) || (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0))
                    {
                        printf("\nO número %d é primo", n);
                        printf("\n");
                    }

                    else
                    {
                        printf("\nO número %d não é primo", n);
                        printf("\n");
                    }

                    break;

                case 2:
                    for (int i = 1; i <= n; i++)
                        if (n % i == 0 && n != i)
                            soma += i;
                    
                    if (soma == n)
                    {
                        printf("\nO número %d é perfeito", n);
                        printf("\n");
                    }

                    else
                    {
                        printf("\nO número %d não é perfeito", n);
                        printf("\n");
                    }

                    break;

                case 3:
                    for (int i = n; i > 0; i /= 10)
                    n_invertido = n_invertido * 10 + i % 10;

                    if (n == n_invertido)
                    {
                        printf("\nO número %d é capicua", n);
                        printf("\n");
                    }

                    else
                    {
                        printf("\nO número %d não é capicua", n);
                        printf("\n");
                    } 

                    break;
            }
        }

        else if (opcao < 1 || opcao > 4)
        {
            printf("\nOpção Inválida");
            printf("\n");
        }

    } while (opcao != 4);

    printf("\n\n");
}