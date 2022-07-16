/*
    ! DESAFIO !
    Lista 03 - Exerc�cio 39
    Leia  tr�s  n�meros  inteiros  positivos  n,  i  e  j.  
    Em  seguida,  imprima,  em  ordem  crescente os n primeiros inteiros positivos que s�o m�ltiplos de i ou de j ou dos dois.
    Exemplo: para n = 10, i = 2 e j = 3 a sa�da ser� 2, 3, 4, 6, 8, 9, 10, 12, 14, 15.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERC�CIO 39\n");

    int n = 0, i = 0, j = 0, cont = 0, cont_multiplos = 0;

    printf("\nDigite a quantidade de m�ltiplos que ser� exibida: ");
    scanf("%d", &n);
    
    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &i);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &j);

    if (n <= 0 || i <= 0 || j <= 0)
        printf("\nN�mero(s) inteiro(s) inv�lido(s)");

    else
    {
        printf("\n%d primeiros m�ltiplos de %d ou de %d ou dos dois:", n, i, j);
        printf("\n\n");
        do
        {
            cont++;
            if (cont % i == 0 || cont % j == 0)
            {
                printf("%d ", cont);
                cont_multiplos++;
            }

        } while (cont_multiplos < n);
    }

    printf("\n\n");
}