/*
    Lista 03 - Exercício 31
    Leia um número n e imprima um trapézio de asteriscos com base n (n > 0). Exemplo: n = 4. 
	/ * 
	/ * * 
	/ * * * 
	/ * * * *
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 31\n");

    int n = 0;

    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &n);
    
    if (n <= 0)
        printf("\nNúmero inteiro inválido");

    else
    {
		printf("\nTrapézio de base %d: ", n);
        printf("\n");

        for (int i = 0; i < n; i++)
		{
			printf("\n");
			for (int j = 0; j <= i; j++)
				printf("* ");
		}
		
    }

    printf("\n\n");
}