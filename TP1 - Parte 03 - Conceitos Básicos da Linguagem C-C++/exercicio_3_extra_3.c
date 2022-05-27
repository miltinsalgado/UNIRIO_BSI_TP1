#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.EXTRA.3\n");

    int tamanho_area_pintada = 0;
    float valor_lata_tinta = 0;

    printf("\nDigite o tamanho da área a ser pintada (em metros quadrados/m²): ");
    scanf("%d", &tamanho_area_pintada);

    printf("\nDigite o valor da lata de tinta (em reais/R$): ");
    scanf("%f", &valor_lata_tinta);

    int quantidade_litros_lata = 12;
    int cobertura_lata_tinta = quantidade_litros_lata * 6;
    int quantidade_latas_tinta = (tamanho_area_pintada / (float) cobertura_lata_tinta) + 0.9999;

    int quantidade_litros_total = quantidade_latas_tinta * cobertura_lata_tinta;
    float valor_total = quantidade_latas_tinta * valor_lata_tinta;

    printf("\nQuantidade de litros: %d", quantidade_litros_total);
    printf("\nQuantidade de latas de tinta: %d", quantidade_latas_tinta);
    printf("\nValor total a pagar: %.2f", valor_total);


    printf("\n\n");
}