/*
    1.4) Leia o valor de um produto e o percentual de desconto e exiba seu novo valor com o desconto e o valor descontado.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.4\n");

    float valor = 0, percentual_desconto = 0;

    printf("\nDigite o valor de um produto (em R$/reais): ");
    scanf("%f", &valor);
    printf("\nDigite o percentual de desconto (em percentual/%%): ");
    scanf("%f", &percentual_desconto);
    
    float valor_descontado = valor * (percentual_desconto / 100);
    float novo_valor = valor - valor_descontado;

    printf("\nNovo valor: %.2f", novo_valor);
    printf("\nValor descontado: %.2f", valor_descontado);

    printf("\n\n");
}