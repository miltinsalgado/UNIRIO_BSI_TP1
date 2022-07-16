/*
    Parte 05 - Exerc�cio 10
    Leia um valor inteiro n e, logo ap�s, solicite a leitura de n n�meros inteiros. 
    Ao final, informe qual o foi o maior e o menor n�mero lido.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERC�CIO 10\n");

    int n = 0, m = 0, maior = 0, menor = 0;

    do
    {
        printf ("\nDigite um n�mero: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("\nApenas n�meros inteiros positivos s�o permitidos!");
    } while (n <= 0);
    
    for (int i = 1; i <= n; i++)
    {
        printf ("\nDigite o %d� n�mero: ", i);
        scanf("%d", &m);

        if (i == 1)
        {
            maior = m;
            menor = m;
        }

        if (m > maior)
            maior = m;

        if (m < menor)
            menor = m;
    }

    printf("\n");
    printf("\nO maior n�mero digitado foi: %d", maior);
    printf("\nO menor n�mero digitado foi: %d", menor);

    printf("\n\n");
}