/*
    2.1) Leia um n�mero inteiro n e informe se ele � ou n�o divis�vel por 6.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 2.1\n");

    int num = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &num);
    
    if (num % 6 == 0)
        printf("\nO n�mero %d � divis�vel por 6", num);

    else
        printf("\nO n�mero %d n�o � divis�vel por 6", num);

    printf("\n\n");
}