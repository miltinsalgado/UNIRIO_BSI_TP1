/*
    Lista 02 - Exerc?cio 09
    Em um mercado de pe?as de baixo pre?o, cada comprador s? pode comprar um tipo de pe?a por vez, 
    mas n?o tem limite da quantidade de pe?as. 
    Construa um programa que entre com a quantidade de pe?as e o valor de cada pe?a. 
    Se o total for maior que R$ 200,00, o cliente ter? um desconto de 20%. 
    Imprima o valor total a pagar.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC?CIO 09\n");

    int quantidade = 0;
    float valor = 0;

    printf("\nDigite a quantidade de pe?as: ");
    scanf("%d", &quantidade);

    printf("\nDigite o valor de cada pe?a (em R$/reais): ");
    scanf("%f", &valor);

    float total = valor * quantidade;
    const float desconto = 0.2;

    if (total > 200)
        total -= total * desconto;

    printf("\nValor total a pagar: R$ %.2f", total);

    printf("\n\n");
}