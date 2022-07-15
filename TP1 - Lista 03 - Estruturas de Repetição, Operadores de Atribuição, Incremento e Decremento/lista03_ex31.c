/*
    Lista 03 - Exerc�cio 31
    Leia um n�mero n e imprima um trap�zio de asteriscos com base n (n > 0). Exemplo: n = 4. 
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
    printf("LISTA 03 - EXERC�CIO 31\n");

    int n = 0;

    printf("\nDigite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    
    if (n <= 0)
        printf("\nN�mero inteiro inv�lido");

    else
    {
		printf("\nTrap�zio de base %d: ", n);
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