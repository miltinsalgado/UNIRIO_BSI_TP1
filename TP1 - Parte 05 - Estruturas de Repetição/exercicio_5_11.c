/*
    5.11) Leia um número inteiro n e imprima a soma dos dígitos que compõem esse número. 
    Dica: use o % para recuperar os dígitos do número.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 5.11\n");

    int n = 0, aux = 0, maior_divisor = 0, soma_digitos = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    aux = n;

    if (aux < 10)
        printf("\nSomatório dos digitos do número %d: %d", n, n);
    
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

        printf("\nSomatório dos digitos do número %d: %d", n, soma_digitos);
    }

    printf("\n\n");
}