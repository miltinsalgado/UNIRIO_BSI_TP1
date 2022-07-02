/*
    Lista 02 - Exerc�cio 24
    Calcule  e  imprima  o  sal�rio  semanal  de  uma  pessoa,  determinado  pelas  seguintes  condi��es:  
    se o n�mero  de  horas  trabalhadas  for  de  at�  40h,  a  pessoa  recebe  R$15,00  por  hora,  sen�o  a  pessoa 
    recebe R$600,00 mais R$21,00 para cada hora trabalhada acima de 40h. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 24\n");

    float horas_trabalhadas = 0;

    printf("\nDigite o n�mero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    float salario_semanal = 0;

    if (horas_trabalhadas >= 0 && horas_trabalhadas <= 40)
        salario_semanal = horas_trabalhadas * 15;
    
    else if (horas_trabalhadas > 40)
        salario_semanal = 600 + 21 * (horas_trabalhadas - 40);

    printf("\nSal�rio semanal (em R$/reais): %.2f", salario_semanal);

    printf("\n\n");
}