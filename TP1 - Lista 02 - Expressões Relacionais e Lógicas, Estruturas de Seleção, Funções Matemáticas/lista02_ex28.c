/*
    ! DESAFIO !
    Lista 02 - Exerc�cio 28
    Leia tr�s valores inteiros n, m e k e informe quantos n�meros inteiros no intervalo n..m (inclusive) s�o m�ltiplos de k.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 28\n");

    int n = 0, m = 0, k = 0;

    printf("\nDigite o primeiro n�mero do intervalo: ");
    scanf("%d", &n);

    printf("\nDigite o �ltimo n�mero do intervalo: ");
    scanf("%d", &m);

    printf("\nDigite um n�mero para a verifica��o de m�ltiplos no intervalo: ");
    scanf("%d", &k);

    int quantidade_multiplos = (m - n) / k + 1;

    printf("\nQuantidade de m�ltiplos de %d no intervalo [%d, %d]: %d", k, n, m, quantidade_multiplos);

    printf("\n\n");
}