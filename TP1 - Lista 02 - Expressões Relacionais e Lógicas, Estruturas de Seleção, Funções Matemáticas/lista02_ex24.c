/*
    Lista 02 - Exercício 24
    Calcule  e  imprima  o  salário  semanal  de  uma  pessoa,  determinado  pelas  seguintes  condições:  
    se o número  de  horas  trabalhadas  for  de  até  40h,  a  pessoa  recebe  R$15,00  por  hora,  senão  a  pessoa 
    recebe R$600,00 mais R$21,00 para cada hora trabalhada acima de 40h. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 24\n");

    float horas_trabalhadas = 0;

    printf("\nDigite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    float salario_semanal = 0;

    if (horas_trabalhadas >= 0 && horas_trabalhadas <= 40)
        salario_semanal = horas_trabalhadas * 15;
    
    else if (horas_trabalhadas > 40)
        salario_semanal = 600 + 21 * (horas_trabalhadas - 40);

    printf("\nSalário semanal (em R$/reais): %.2f", salario_semanal);

    printf("\n\n");
}