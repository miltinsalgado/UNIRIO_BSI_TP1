#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 5.6\n");

    int a = 0, b = 0, cont = 0, aux = 0, soma = 0;

    printf("\nDigite o primeiro n�mero do intervalo: ");
    scanf("%d", &a);

    printf("\nDigite o segundo n�mero do intervalo: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("\nPrimeiro n�mero digitado � maior do que o segundo! Os valores foram invertidos");
        printf("\n");
        aux = a;
        a = b;
        b = aux;
    }

    if (a == b)
        printf("\nOs dois valores s�o iguais, portanto n�o h� intervalo");

    else
    {
        cont = a;

        do
        {
            if (cont % 2 == 0)
            {
                printf("\n%d", cont);
                soma += cont;
            }
            cont++;
        } while (a <= cont && cont <= b);

        printf("\n");
        printf("\nSomat�rio dos valores no intervalo [%d ; %d]: %d", a, b, soma);
    }

    printf("\n\n");
}