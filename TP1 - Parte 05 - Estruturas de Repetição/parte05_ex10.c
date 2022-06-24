/*
    Parte 05 - Exercício 10
    Leia um valor inteiro n e, logo após, solicite a leitura de n números inteiros. 
    Ao final, informe qual o foi o maior e o menor número lido.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("PARTE 05 - EXERCÍCIO 10\n");

    int n = 0, m = 0, maior = 0, menor = 0;

    do
    {
        printf ("\nDigite um número: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("\nApenas números inteiros positivos são permitidos!");
    } while (n <= 0);
    
    for (int i = 1; i <= n; i++)
    {
        printf ("\nDigite o %d° número: ", i);
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
    printf("\nO maior número digitado foi: %d", maior);
    printf("\nO menor número digitado foi: %d", menor);

    printf("\n\n");
}