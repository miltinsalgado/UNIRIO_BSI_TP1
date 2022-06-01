/*
    1.11) Leia o comprimento e a largura de um terreno retangular, além do preço do metro quadrado de grama. 
    Depois, calcule e imprima:
    a) A área a ser coberta de grama.
    b) O custo total de grama para gramar o terreno.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 1.11\n");

    float comprimento = 0, largura = 0, preco_metro_quadrado = 0;

    printf("\nDigite o comprimento do terreno retangular (em m/metros): ");
    scanf("%f", &comprimento);

    printf("\nDigite a largura do terreno retangular (em m/metros): ");
    scanf("%f", &largura);

    printf("\nDigite o preço do metro quadrado de grama (em R$): ");
    scanf("%f", &preco_metro_quadrado);

    float area = comprimento * largura;
    float custo_total = area * preco_metro_quadrado;

    printf("\nÁrea a ser coberta de grama: %.2f", area);
    printf("\nCusto total de grama para gramar o terreno: R$ %.2f", custo_total);

    printf("\n\n");
}