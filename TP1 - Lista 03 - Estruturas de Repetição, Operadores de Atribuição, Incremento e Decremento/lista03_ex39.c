/*
    ! DESAFIO !
    Lista 03 - Exercício 39
    Leia  três  números  inteiros  positivos  n,  i  e  j.  
    Em  seguida,  imprima,  em  ordem  crescente os n primeiros inteiros positivos que são múltiplos de i ou de j ou dos dois.
    Exemplo: para n = 10, i = 2 e j = 3 a saída será 2, 3, 4, 6, 8, 9, 10, 12, 14, 15.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 03 - EXERCÍCIO 39\n");

    int n = 0, i = 0, j = 0, cont = 0, cont_multiplos = 0;

    printf("\nDigite a quantidade de múltiplos que será exibida: ");
    scanf("%d", &n);
    
    printf("\nDigite o primeiro número: ");
    scanf("%d", &i);

    printf("\nDigite o segundo número: ");
    scanf("%d", &j);

    if (n <= 0 || i <= 0 || j <= 0)
        printf("\nNúmero(s) inteiro(s) inválido(s)");

    else
    {
        printf("\n%d primeiros múltiplos de %d ou de %d ou dos dois:", n, i, j);
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