#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 5.8\n");

    long long int n = 0, cont = 0, fatorial = 1;

    printf("\nDigite um n�mero: ");
    scanf("%lld", &n);

    if (n > 0)
    {
        cont = n;

        do
        {
            fatorial *= cont;

            if (cont != 1)
                printf("%lld x ", cont);

            else
                printf("%lld", cont);

            cont--;
        } while (cont >= 1);    

        printf(" = %lld", fatorial);
    }
    
    else
        printf("Apenas n�meros positivos s�o aceitos");

    printf("\n\n");
}