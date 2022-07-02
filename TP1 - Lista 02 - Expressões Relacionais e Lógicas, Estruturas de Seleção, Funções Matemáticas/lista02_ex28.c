/*
    ! DESAFIO !
    Leia três valores inteiros n, m e k e informe quantos números inteiros no intervalo n..m (inclusive) são múltiplos de k.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 28\n");

    int n = 0, m = 0, k = 0;

    printf("\nDigite o primeiro número do intervalo: ");
    scanf("%d", &n);

    printf("\nDigite o último número do intervalo: ");
    scanf("%d", &m);

    printf("\nDigite um número para a verificação de múltiplos no intervalo: ");
    scanf("%d", &k);

    int quantidade_multiplos = 0;

    if ((n % k == 0 || m % k == 0) && n != 0)
        quantidade_multiplos = (m - n) / k + 1;
    else
        quantidade_multiplos = (m - n) / k;

    printf("\nQuantidade de múltiplos de %d no intervalo [%d, %d]: %d", k, n, m, quantidade_multiplos);

    printf("\n\n");
}