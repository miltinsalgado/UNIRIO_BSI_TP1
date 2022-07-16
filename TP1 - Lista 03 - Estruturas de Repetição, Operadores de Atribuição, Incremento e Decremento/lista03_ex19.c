/*
    Lista 03 - Exercício 19
    Uma empresa classifica seus funcionários de acordo com um índice de produtividade: (1) Excelente, (2) Bom e (3) Regular. 
    Cada nível acrescenta um abono ao salário base do funcionário de acordo com o seguinte: 
    • Excelente: 40% do salário base 
    • Bom: 20% do salário base 
    • Regular: 5% do salário base 
    Faça um programa que permita a entrada da matrícula, do salário base e o índice de produtividade 
    de  vários  funcionários,  até  o  usuário  digitar  matrícula  zero  ou  negativa.  
    Para  cada  funcionário imprima a sua matrícula e seu novo salário.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 19\n");

    int matricula = 0, indice_de_produtividade = 0;
    float salario_base = 0;

    while (1)
    {
        printf("\nDigite a matrícula do funcionário: ");
        scanf("%d", &matricula);

        if (matricula <= 0)
            break;
        
        else
        {
            printf("\nDigite o salário do funcionário (em R$/reais): ");
            scanf("%f", &salario_base);

            printf("\nDigite o índice de produtividade do funcionário (1 - Excelente, 2 - Bom e 3 - Regular): ");
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

            printf("\nMatrícula: %d", matricula);
            printf("\nNovo salário (em R$/reais): R$ %.2f", novo_salario);
            printf("\n");
        }
    }

    printf("\n\n");
}