/*
    Lista 02 - Exercício 07
    Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que 18 anos. 
    Faça um programa para ler a idade e a altura de um atleta e exibir uma das mensagens:
    "selecionado" ou "não selecionado".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERCÍCIO 07\n");

    float altura = 0;
    int idade = 0;

    printf("\nDigite a altura do atleta (em m/metros): ");
    scanf("%f", &altura);

    printf("\nDigite a idade do atleta: ");
    scanf("%d", &idade);

    if (altura >= 1.80 && idade < 18)
        printf("\nSelecionado");

    else
        printf("\nNão Selecionado");

    printf("\n\n");
}