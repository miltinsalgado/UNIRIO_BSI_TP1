/*
    5.11) Leia um n�mero inteiro n e imprima a soma dos d�gitos que comp�em esse n�mero. 
    Dica: use o % para recuperar os d�gitos do n�mero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 5.11\n");

    int n = 0, aux = 0, maior_divisor = 0, soma_digitos = 0;

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    aux = n;

    if (aux < 10)
        printf("\nSomat�rio dos digitos do n�mero %d: %d", n, n);
    
    else
    {
        for (int i = 10; i <= aux; i *= 10)
            if (aux / i < 10)
                maior_divisor = i;

        for (int i = maior_divisor; i > 0; i /= 10)
        {
            soma_digitos += aux / i;
            aux %= i;
        }

        printf("\nSomat�rio dos digitos do n�mero %d: %d", n, soma_digitos);
    }

    printf("\n\n");
}