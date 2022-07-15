/*
    Parte 05 - Exerc�cio 08
    Leia um n�mero inteiro n (n > 0) e calcule n!. 
    O programa deve gerar a seguinte sa�da (para n = 7): 
    7 x 6 x 5 x 4 x 3 x 2 x 1 = 5040
    Dica: Use o tipo long long e formate a sa�da como %lld
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 08\n");

    long long int n = 0, cont = 0;
    long long int fatorial = 1;

    printf("\nDigite um n�mero: ");
    scanf("%lld", &n);

    if (n > 0)
    {
        cont = n;

        do
        {
            fatorial *= cont;

            if (cont != 1)
                printf("%d x ", cont);

            else
                printf("%d", cont);

            cont--;
        } while (cont >= 1);    

        printf(" = %lld", fatorial);
    }
    
    else
        printf("Apenas n�meros positivos s�o aceitos");

    printf("\n\n");
}