/*
    Lista 02 - Exercício 22
    Leia o número de horas trabalhadas e o valor da hora de um trabalhador e imprima o salário bruto e 
    líquido, sabendo que o salário líquido é igual ao salário bruto menos o IR. 
    O desconto do IR segue as seguintes regras: 
    • Salário bruto menor ou igual a R$ 1900,00: desconto ZERO 
    • Salário bruto maior que R$1900,00 e menor ou igual a R$ 4300,00: desconto de 10% 
    • Salário bruto maior que R$4300,00 e menor ou igual a R$ 5800,00: desconto de 15% 
    • Salário bruto maior que R$5800,00: desconto de 27,5%
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 22\n");

    float horas_trabalhadas = 0, valor_hora = 0;

    printf("\nDigite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("\nDigite o valor da hora: ");
    scanf("%f", &valor_hora);

    float salario_bruto = horas_trabalhadas * valor_hora;

    float salario_liquido = salario_bruto, desconto_ir = 0;

    if (salario_bruto >= 0 && salario_bruto <= 1900)
        desconto_ir = 0;

    else if (salario_bruto > 1900 && salario_bruto <= 4300)
        desconto_ir = salario_bruto * 10 / 100;

    else if (salario_bruto > 4300 && salario_bruto <= 5800)
        desconto_ir = salario_bruto * 15 / 100;

    else if (salario_bruto > 5800)
        desconto_ir = salario_bruto * 27.5 / 100;

    salario_liquido -= desconto_ir;

    printf("\nSalário bruto: R$ %.2f", salario_bruto);
    printf("\nSalário líquido: R$ %.2f", salario_liquido);

    printf("\n\n");
}