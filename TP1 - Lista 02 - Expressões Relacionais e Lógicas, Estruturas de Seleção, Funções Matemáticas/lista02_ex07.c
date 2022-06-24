/*
    Lista 02 - Exerc�cio 07
    Um t�cnico est� selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que 18 anos. 
    Fa�a um programa para ler a idade e a altura de um atleta e exibir uma das mensagens:
    "selecionado" ou "n�o selecionado".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("LISTA 02 - EXERC�CIO 07\n");

    float altura = 0;
    int idade = 0;

    printf("\nDigite a altura do atleta (em m/metros): ");
    scanf("%f", &altura);

    printf("\nDigite a idade do atleta: ");
    scanf("%d", &idade);

    if (altura >= 1.80 && idade < 18)
        printf("\nSelecionado");

    else
        printf("\nN�o Selecionado");

    printf("\n\n");
}