/*
    2.2) Leia um n�mero inteiro n e informe se ele � divis�vel por 3 e por 7.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 2.2\n");

    int num = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 7 == 0)
        printf("\nO n�mero %d � divis�vel por 3 e por 7", num);

    else
        printf("\nO n�mero %d n�o � divis�vel por 3 e por 7", num);

    printf("\n\n");
}