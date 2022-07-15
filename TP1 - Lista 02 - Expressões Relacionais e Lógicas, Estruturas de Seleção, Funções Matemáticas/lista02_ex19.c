/*
    Lista 02 - Exercício 19
    Leia o ano atual e o ano de nascimento de uma pessoa e exiba a sua idade. 
    A seguir, informe se a pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 60 anos) 
    ou idosa (61 anos em diante).
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 19\n");

    int ano_atual = 0, ano_nascimento = 0;

    printf("\nDigite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("\nDigite o ano de nascimento da pessoa: ");
    scanf("%d", &ano_nascimento);

    int idade = ano_atual - ano_nascimento;

    if (idade >= 0 && idade <= 3)
        printf("\nA pessoa é bebê");

    else if (idade >= 4 && idade <= 10)
        printf("\nA pessoa é criança");

    else if (idade >= 11 && idade <= 18)
        printf("\nA pessoa é adolescente");

    else if (idade >= 19 && idade <= 60)
        printf("\nA pessoa é adulta");

    else if (idade > 61)
        printf("\nA pessoa é idosa");

    else
        printf("\nIdade inválida");

    printf("\n\n");
}