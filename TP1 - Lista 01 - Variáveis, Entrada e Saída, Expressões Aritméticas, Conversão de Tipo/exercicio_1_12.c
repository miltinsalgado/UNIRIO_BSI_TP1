/*
    1.12) Leia o comprimento e a largura de um terreno retangular, além do preço do metro de arame farpado. 
    Depois, calcule e imprima:
    a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4
    voltas de arame farpado.
    b) O custo total com o arame farpado.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.12\n");

    float comprimento = 0, largura = 0, preco_metro_arame_farpado = 0;

    printf("\nDigite o comprimento do terreno retangular (em m/metros): ");
    scanf("%f", &comprimento);

    printf("\nDigite a largura do terreno retangular (em m/metros): ");
    scanf("%f", &largura);

    printf("\nDigite o preço do metro do arame farpado (em R$/reais): ");
    scanf("%f", &preco_metro_arame_farpado);

    float metragem_arame = 8 * (comprimento + largura);
    float custo_total = metragem_arame * preco_metro_arame_farpado;

    printf("\nMetragem de arame gasta para cercar o terreno: %.2f", metragem_arame);
    printf("\nCusto total com o arame farpado: R$ %.2f", custo_total);

    printf("\n\n");
}