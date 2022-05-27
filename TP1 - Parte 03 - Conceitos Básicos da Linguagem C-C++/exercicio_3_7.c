#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("EXERCÍCIO 3.7\n");

    float salario = 0, percentual_aumento = 0;

    printf("\nDigite o salário (em reais/R$): ");
    scanf("%f", &salario);

    printf("\nDigite o percentual de aumento (em percentual/%%): ");
    scanf("%f", &percentual_aumento);

    float novo_salario = salario + salario * (percentual_aumento / 100);

    printf("\nSalário antigo: R$ %.2f", salario);
    printf("\nPercentual de aumento: %.0f%%", percentual_aumento);
    printf("\nNovo salário: R$ %.2f", novo_salario);

    printf("\n\n");
}