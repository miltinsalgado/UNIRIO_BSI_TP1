/*
    Lista 02 - Exercício 27
    Um endocrinologista deseja controlar a saúde de seus pacientes e, para isto, utiliza o índice de
    massa corporal (IMC). 
    Sabendo-se que o IMC é calculado através da fórmula:
    IMC = peso / altura^2
    Leia o peso (Kg) e altura (metros) de um paciente e exiba sua faixa de risco, baseando-se na
    seguinte tabela:

    IMC                     Faixa de risco
    Abaixo de 20            Abaixo do peso
    Acima de 20 até 25      Normal
    Acima de 25 até 30      Excesso de peso
    Acima de 30 até 35      Obesidade
    Acima de 35             Obesidade mórbida
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 27\n");

    float peso = 0, altura = 0;

    printf("\nDigite o peso do paciente (em Kg/quilogramas): ");
    scanf("%f", &peso);

    printf("\nDigite a altura do paciente (em m/metros): ");
    scanf("%f", &altura);

    float imc = peso / pow(altura, 2);

    if (imc < 20)
        printf("\nAbaixo do peso");

    else if (imc > 20 && imc <= 25)
        printf("\nNormal");

    else if (imc > 25 && imc <= 30)
        printf("\nExcesso de peso");

    else if (imc > 30 && imc <= 35)
        printf("\nObesidade");

    else
        printf("\nObesidade mórbida");

    printf("\n\n");
}