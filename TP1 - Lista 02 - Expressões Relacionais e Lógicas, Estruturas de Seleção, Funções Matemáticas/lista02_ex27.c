/*
    Lista 02 - Exerc�cio 27
    Um endocrinologista deseja controlar a sa�de de seus pacientes e, para isto, utiliza o �ndice de
    massa corporal (IMC). 
    Sabendo-se que o IMC � calculado atrav�s da f�rmula:
    IMC = peso / altura^2
    Leia o peso (Kg) e altura (metros) de um paciente e exiba sua faixa de risco, baseando-se na
    seguinte tabela:

    IMC                     Faixa de risco
    Abaixo de 20            Abaixo do peso
    Acima de 20 at� 25      Normal
    Acima de 25 at� 30      Excesso de peso
    Acima de 30 at� 35      Obesidade
    Acima de 35             Obesidade m�rbida
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 27\n");

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
        printf("\nObesidade m�rbida");

    printf("\n\n");
}