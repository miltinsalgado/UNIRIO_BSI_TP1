/*
    2.9) Em um mercado de peças de baixo preço, cada comprador só pode comprar um tipo de peça por vez, 
    mas não tem limite da quantidade de peças. 
    Construa um programa que entre com a quantidade de peças e o valor de cada peça. 
    Se o total for maior que R$ 200,00, o cliente terá um desconto de 20%. 
    Imprima o valor total a pagar.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 2.9\n");

    int quantidade = 0;
    float valor = 0;

    printf("\nDigite a quantidade de peças: ");
    scanf("%d", &quantidade);

    printf("\nDigite o valor de cada peça (em R$/reais): ");
    scanf("%f", &valor);

    float total = valor * quantidade;

    if (total > 200)
        total -= total * 20 / 100;

    printf("\nValor total a pagar: R$ %.2f", total);

    printf("\n\n");
}