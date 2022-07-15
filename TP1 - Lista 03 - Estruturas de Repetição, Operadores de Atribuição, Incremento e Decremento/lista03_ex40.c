/*
    ! DESAFIO !
    Lista 03 - Exerc�cio 40
    Leia um n�mero n e imprima um losango de asteriscos com largura n (n deve ser �mpar e n >= 3). 
    Exemplo: n = 5. 
    /     * 
    /   * * * 
    / * * * * * 
    /   * * * 
    /     *
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 40\n");

    int n = 0, aux = 0, temp = 0;

    printf("\nDigite um n�mero inteiro �mpar maior ou igual a 3: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n < 3)
        printf("\nN�mero inteiro inv�lido");

    else
    {
        aux = n - 1;
        temp = 2;

        printf("\nLosango de largura %d: ", n);
        printf("\n");

        for (int i = 1; i <= n; i++)
        {
            printf("\n");
            if (aux >= 0)
            {
                for (int j = 1; j <= aux; j++)
                    printf(" ");

                for (int j = 1; j <= n - aux; j++)
                    printf("* ");

                aux -= 2;
            }

            else
            {
                for (int j = 1; j <= temp; j++)
                    printf(" ");

                for (int j = 1; j <= n - temp; j++)
                    printf("* ");

                temp += 2;
            }
        }
    }

    printf("\n\n");
}