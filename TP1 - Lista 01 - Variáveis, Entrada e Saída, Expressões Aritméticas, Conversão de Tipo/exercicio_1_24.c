/*
    ! DESAFIO !
    1.24) Sabendo que um caixa eletr�nico possui notas de R$ 10, R$ 20, R$ 50 e R$ 100, 
    leia um valor que representa a quantidade de dinheiro que o cliente deseja sacar 
    e imprima a quantidade necess�ria de cada uma dessas notas para formar o valor desejado. 
    A quantidade total de notas deve ser a m�nima poss�vel. 
    Assuma que a quantidade fornecida pelo cliente � sempre m�ltipla de 10.

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERC�CIO 1.24\n");

    int valor = 0;

    printf("\nDigite um valor (em R$/reais): ");
    scanf("%d", &valor);

    int quantidade_notas_100 = 0, quantidade_notas_50 = 0 ,quantidade_notas_20 = 0, quantidade_notas_10 = 0;

    quantidade_notas_100 = valor / 100;
    quantidade_notas_50 = valor % 100 / 50;
    quantidade_notas_20 = valor % 100 % 50 / 20;
    quantidade_notas_10 = valor % 100 % 50 % 20 / 10;

    printf("\nQuantidade de notas do saque: ");
    printf("\nR$ 100,00 = %d", quantidade_notas_100);
    printf("\nR$ 50,00 = %d", quantidade_notas_50);
    printf("\nR$ 20,00 = %d", quantidade_notas_20);
    printf("\nR$ 10,00 = %d", quantidade_notas_10);

    printf("\n\n");
}