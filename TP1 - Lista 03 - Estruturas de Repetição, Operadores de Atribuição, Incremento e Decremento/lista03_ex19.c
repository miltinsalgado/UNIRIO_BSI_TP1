/*
    Lista 03 - Exerc�cio 19
    Uma empresa classifica seus funcion�rios de acordo com um �ndice de produtividade: (1) Excelente, (2) Bom e (3) Regular. 
    Cada n�vel acrescenta um abono ao sal�rio base do funcion�rio de acordo com o seguinte: 
    � Excelente: 40% do sal�rio base 
    � Bom: 20% do sal�rio base 
    � Regular: 5% do sal�rio base 
    Fa�a um programa que permita a entrada da matr�cula, do sal�rio base e o �ndice de produtividade 
    de  v�rios  funcion�rios,  at�  o  usu�rio  digitar  matr�cula  zero  ou  negativa.  
    Para  cada  funcion�rio imprima a sua matr�cula e seu novo sal�rio.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 19\n");

    int matricula = 0, indice_de_produtividade = 0;
    float salario_base = 0;

    while (1)
    {
        printf("\nDigite a matr�cula do funcion�rio: ");
        scanf("%d", &matricula);

        if (matricula <= 0)
            break;
        
        else
        {
            printf("\nDigite o sal�rio do funcion�rio (em R$/reais): ");
            scanf("%f", &salario_base);

            printf("\nDigite o �ndice de produtividade do funcion�rio (1 - Excelente, 2 - Bom e 3 - Regular): ");
            scanf("%d", &indice_de_produtividade);

            float novo_salario = salario_base;

            switch (indice_de_produtividade)
            {
                case 1:
                    novo_salario += salario_base * 40 / 100;
                    break;

                case 2:
                    novo_salario += salario_base * 20 / 100;
                    break;

                case 3:
                    novo_salario += salario_base * 5 / 100;
                    break;
                
                default:
                    break;
            }

            printf("\nMatr�cula: %d", matricula);
            printf("\nNovo sal�rio (em R$/reais): R$ %.2f", novo_salario);
            printf("\n");
        }
    }

    printf("\n\n");
}